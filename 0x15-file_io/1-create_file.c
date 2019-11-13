#include "holberton.h"
/**
 * _strlen - length string
 * @s: string
 * Return: int string
 */
int _strlen(char *s)
{
	int i;

	if (s)
		return (0);

	for (i = 0; s[i]; i++)
		;
	return (i);
}
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
	len = _strlen(text_content);
	if (write(fd, text_content, len) != len)
		return (-1);
	close(fd);
	return (1);
}
