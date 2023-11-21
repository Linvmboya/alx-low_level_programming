#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - function that concatenates all arguments of the program
 * @ac: input
 * @av: a pointer
 * Return: a pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int a, n, r = 0, m = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (n = 0; av[a][n]; n++)
			m++;
	}
	m += ac;
	str = malloc(sizeof(char) * m + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (n = 0; av[a][n]; n++)
		{
			str[r] = av[a][n];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}

