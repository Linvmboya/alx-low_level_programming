#include "main.h"

/**
 * close_file - function that closes the file descriptors
 * @fd: file descriptor to be closed
 *
 */
void close_file(int fd)
{
	int _close;

	_close = close(fd);
	if (_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * create_buffer - it allocates 1024 bytes for a buffer
 * @file: the name of file that the buffer is storing characters from
 *
 * Return: a pointer to the buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * main - program that copies the contents of a file to another file
 * @argc: number of arguments
 * @argv: is a pointer to an array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int to, from, _read, _write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	_read = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || _read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		_write = write(to, buffer, _read);
		if (to == -1 || _write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		_read = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (_read > 0);
	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}
