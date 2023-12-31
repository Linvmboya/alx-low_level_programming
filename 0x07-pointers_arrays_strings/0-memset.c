#include "main.h"
/**
 * _memset - A function that fills memory with a constant byte
 * @s: a pointer
 * @b: a constant byte
 * @n: number of bytes
 * Return: s which is a pointer to memory area
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
