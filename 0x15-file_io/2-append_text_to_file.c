#include "main.h"
#include <string.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: a null terminated string to be added at the enf of the file
 * Return: 1 (success), otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t _write;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (!fd)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	_write = write(fd, text_content, strlen(text_content));
	if (!_write || _write != strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
