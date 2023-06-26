#include "main.h"
/**
 * _strlen - is a function that returns the length of a string
 * @s: i the string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
