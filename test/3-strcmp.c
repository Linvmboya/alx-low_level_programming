#include "main.h"
/**
 * _strcmp - Is a program that compares string values
 * @s1: A string
 * @s2: A string
 * Return: s1[m] - s2[m]
 */
int _strcmp(char *s1, char *s2)
{
	int m = 0;

	while (s1[m] != '\0' && s2[m] != '\0')
	{
		if (s1[m] != s2[m])
		{
			return (s1[m] - s2[m]);
		}
		m++;
	}
	return (0);
}
