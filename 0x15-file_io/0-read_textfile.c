#include "holberton.h"


ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t i;
	char *size;

	if (!filename || !letters)
		return (0);
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
	i = write(STDOUT_FILENO, size, i);
	free(size);
	close(file);
	return (i);
}
