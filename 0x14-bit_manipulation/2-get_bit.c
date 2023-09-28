#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the number of search done
 * @index: index of the bit to be searched
 * Return: the value of the bit at the given index, else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 63)
		return (-1);
	x = (n >> index) & 1;
	return (x);
}
