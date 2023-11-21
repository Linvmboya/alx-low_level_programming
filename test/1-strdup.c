#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - it returns a pointer to a newly allocated memory space
 * @str: the string to duplicate
 * Return: 0
 */
char *_strdup(char *str)
{
	char *add;
	int m;
	int n = 0;

	if (str == NULL)
		return (NULL);
	m = 0;
	while (str[m] != '\0')
		m++;
	add = malloc(sizeof(char) * (m + 1));
	if (add == NULL)
		return (NULL);
	for (n = 0; str[n]; n++)
		add[n] = str[n];
	return (add);
}
