#include "holberton.h"
/**
 * append_text_to_file - append a file
 * @filename: name of file
 * @text_content: content to put in file
 * Return: return
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_APPEND | O_RDWR, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (len = 0; text_content[len] != '\0'; len++)
		;
	fd = write(fd, text_content, len);
	if (fd == -1)
		return (-1);
	close(fd);
	return (1);

}
