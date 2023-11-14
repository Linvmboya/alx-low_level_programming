#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: pointer to the memory area to fill
 * @b: a constant byte that fills the memory
 * @n: number of bytes used to fill the memory
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int m = 0;

	for (; n > 0; m++)
	{
		s[m] = b;
		n--;
	}
	return (s);
}
