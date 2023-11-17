#include "main.h"
/**
 * _strncpy - it copies a string
 * @dest: An input
 * @src: An input
 * @n: the number of times it copies
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m = 0;

	while (m < n && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
