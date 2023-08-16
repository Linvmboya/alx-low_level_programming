#include "main.h"
/**
 * flip_bits - it flips bits to get from one number to another
 * @n: number of bits flip
 * @m: number of bits to flip
 * Return: number of bits needed to flip from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int num;
	unsigned long int result = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		num = result >> x;
		if (num & 1)
		count++;
	}
	return (count);
}
