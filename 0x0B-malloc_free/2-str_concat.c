#include <stdlib.h>
#include "main.h"
/**
 * str_concat - a function that concatenates two strings
 * @s1: An input
 * @s2: An input
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int m, n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	m = n = 0;
	while (s1[m] != '\0')
		m++;
	while (s2[n] != '\0')
		n++;
	conct = malloc(sizeof(char) * (m + n + 1));
	if (conct == NULL)
		return (NULL);
	m = n = 0;
	while (s1[m] != '\0')
	{
		conct[m] = s1[m];
		m++;
	}
	while (s2[n] != '\0')
	{
		conct[m] = s2[n];
		m++;
		n++;
	}
	conct[m] = '\0';
	return (conct);
}
