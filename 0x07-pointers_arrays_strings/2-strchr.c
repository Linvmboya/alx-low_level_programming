#include "main.h"
/**
 * _strchr - it locates a character in a string
 * @s: the string
 * @c: the character
 * Return: 0 if character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
