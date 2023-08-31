#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to be searched
 * @index: the index of the bit you want to get
 * Return: value of the bit index, else 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 63)
		return (-1);
	x = (n >> index) & 1;
	return (x);
}
