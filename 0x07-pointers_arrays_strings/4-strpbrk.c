#include "main.h"
/**
 * _strpbrk - Function that searches a string for any set of bytes
 * @s: a string
 * @accept: a string
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
