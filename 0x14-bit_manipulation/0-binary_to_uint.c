#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: is a pointer to a string if binary chars
 * Return: 1 (success), 0 if b is NULL or b has non-binary characters
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int result;

	if (b == NULL)
	{
		return (0);
	}
	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		result = 2 * result + (b[x] - '0');
	}
	return (result);
}
