#include "holberton.h"
/**
 * main - Function to copy a file
 * @argc: counter arguments
 * @argv: arguments received
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *buf[1024];
	int first, sec, rd, wr;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	first = open(argv[1], O_RDONLY);
	if (first == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	sec = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (sec == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((rd = read(first, buf, 1024)) > 0)
		wr = write(sec, buf, rd);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (wr == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	if ((close(first)) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", first), exit(100);
	if ((close(sec)) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", sec), exit(100);
	return (0);
}
