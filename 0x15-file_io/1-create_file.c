#include "main.h"
/**
 * create_file - A function that creates a file
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 (success), -1 (fail)
 */
int create_file(const char *filename, char *text_content)
{
	int newfile, result = 1, count = 0;

	if (!filename)
		return (-1);
	newfile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (newfile == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[count])
			count++;
		result = write(newfile, text_content, count);
	}
	if (result == -1)
		return (-1);
	close(newfile);
	return (1);
}


