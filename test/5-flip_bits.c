#include "main.h"

/**
 * int flip_bits - returns bits needed to flip from one number to another
 * @n: an input
 * @m: an input
 * Return: number of bits used to flip from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int current, exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		current = exclusive >> x;
		if (current & 1)
			count++;
	}
	return (count);
}

