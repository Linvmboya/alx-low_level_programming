#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: is a pointer to the number to be set
 * @index: the index of the bit to be set
 * Return: 1 (success), otherwise (-1)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
