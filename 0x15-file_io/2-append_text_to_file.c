#include "main.h"
#include <string.h>
/**
 * append_text_to_file - function that appends text at the end of a line
 * @filename: a pointer to the name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 (success), -1 (fail)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, _write, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}
	_write = write(fd, text_content, len);
	if (fd == -1 || _write == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
