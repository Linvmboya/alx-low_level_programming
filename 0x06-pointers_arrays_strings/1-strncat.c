#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: is a string
 * @src: is a string
 * @n: is the number of bytes
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int m;
	int x;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[m] = src[x];
		m++;
		x++;
	}
	dest[m] = '\0';
		return (dest);
}

