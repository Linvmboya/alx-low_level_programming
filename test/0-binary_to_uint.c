#include "main.h"

/**
 * binary_to_uint - function that converts binary to an unsigned int
 * @b: is a pointer to a string of 0 and 1 characters
 * Return: the converted number, otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int y = 0;

	if (b == NULL)
		return (0);
	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		y = 2 * y + (b[x] - '0');
	}
	return (y);
}
