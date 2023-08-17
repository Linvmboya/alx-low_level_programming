#include "main.h"

/**
 * read_textfile - reads text file and prints it to the POSIX standard output
 * @filename: the file to read
 * @letters: number of letters to be read and printed
 * Return: actual number of letters read and printed to POSIX standard output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t _read, _write;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (!fd)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	_read = read(fd, buffer, letters);
	if (!_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	_write = write(STDOUT_FILENO, buffer, _read);
	if (!_write)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (_read);
}
