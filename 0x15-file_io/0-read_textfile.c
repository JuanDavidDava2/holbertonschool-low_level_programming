#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: size pointer
 * @letters: index
 * Return: index
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int i;
	char *size;

	size = malloc(sizeof(char) * letters);
	if (size == NULL)
	{
		free(size);
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	i = read(file, size, letters);
	write(STDOUT_FILENO, size, i);
	if (i < 1)
		return (0);
	if (filename == NULL)
		return (0);
	free(size);
	close(file);
	return (i);
}
