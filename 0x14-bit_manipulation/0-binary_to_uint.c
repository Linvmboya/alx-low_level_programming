#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1
 * Return: the converted number, 0 if b contains chars and 1 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int y = 0;
	int x;

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
