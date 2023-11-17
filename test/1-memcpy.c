#include "main.h"
/**
 * _memcpy - copies a block of memory area to another area
 *  @dest: the area used to store the copied block
 *  @src: the copied area
 *  @n: the number of bytes copied
 *  Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int q = 0;

	for (; m < q; m++)
	{
	dest[m] = src[m];
n--;
	}
	return (dest);
}
