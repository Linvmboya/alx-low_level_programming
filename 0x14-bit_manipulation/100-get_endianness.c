#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 for big endian and 1 for little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
