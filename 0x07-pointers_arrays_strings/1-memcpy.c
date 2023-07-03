#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: the memory area used for storage
 * @src: memory area to be copied from
 * @n: number of bytes copied
 * Return: copied memory containing n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int l = n;

	for (; r < l; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
