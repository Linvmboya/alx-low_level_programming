#include "main.h"
/**
 * _strcpy - A program that prints the string that src points to
 * @dest: Where to copy to
 * @src: where to copy from
 * Return: String
 */
char *_strcpy(char *dest, char *src)
{
	int m = 0;
	int n = 0;

	while (*(src + m) != '\0')
	{
		m++;
	}
	for (; n < m; n++)
	{
		dest[n] = src[n];
	}
	dest[m] = '\0';
	return (dest);
}
