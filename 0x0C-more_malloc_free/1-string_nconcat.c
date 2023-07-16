#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - A function that concatenates two strings
 * @s1: A string
 * @s2: A string
 * @n: Number of bytes
 * Return: A pointer to the newly allocated memory space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int m = 0;
	unsigned int p = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		x = malloc(sizeof(char) * (len1 + n + 1));
	else
		x = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!x)
		return (NULL);
	while (m < len1)
	{
		x[m] = s1[m];
		m++;
	}
	while (n < len2 && m < (len1 + n))
		x[m++] = s2[p++];
	while (n >= len2 && m < (len1 + len2))
		x[m++] = s2[p++];
	x[m] = '\0';
	return (x);
}

