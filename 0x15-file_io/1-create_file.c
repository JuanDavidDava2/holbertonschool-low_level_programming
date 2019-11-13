#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content to put in file
 * Return: return
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (0);
	for (len = 0; text_content[len] < '\0'; len++)
		;
	fd = write(fd, text_content, len);
	close(fd);
	return (1);

}
