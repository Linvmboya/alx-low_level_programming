#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * count_word - function that counts number of words in a string
 * @s: the string
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, x, y;

	flag = 0;
	y = 0;
	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			y++;
		}
	}
	return (y);
}
/**
 * strtow - function that splits a string into words
 * @str: string
 * Return: pointer to an array of strings (words), otherwise NULL
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int m, n = 0, len = 0, words, x = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (m = 0; m <= len; m++)
	{
		if (str[m] == ' ' || str[m] == '\0')
		{
			if (x)
			{
				end = m;
				tmp = (char *) malloc(sizeof(char) * (x + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[n] = tmp - x;
				n++;
				x = 0;
			}
		}
		else if (x++ == 0)
			start = m;
	}
	matrix[n] = NULL;
	return (matrix);
}


