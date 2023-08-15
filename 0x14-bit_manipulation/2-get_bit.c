#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the value to be searched
 * @index: index of the bit to be searched
 * Return: value of the bit at the index, otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 63)
		return (-1);
	x = (n >> index) & 1;
	return (x);
}
