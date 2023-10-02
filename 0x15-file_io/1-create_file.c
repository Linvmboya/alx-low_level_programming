#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of the file
 * @text_content: null terminated string which is to be written to the file
 * Return: 1 (success), otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int file, result = 1, count = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[count])
			count++;
		result = write(file, text_content, count);
	}
	if (result == -1)
		return (-1);
	close(file);
	return (1);
}
