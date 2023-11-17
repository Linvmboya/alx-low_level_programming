#include "main.h"
/**
 * _memset - it writes a value into a block of memory
 * @s: the memory address to be filled
 * @b: the value
 * @n: the number of bytes used
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
