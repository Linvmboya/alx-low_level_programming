#include "main.h"
/**
 * puts2 - is a function that prints every character of a string
 * @str: the string
 * Return: printed string
 */
void puts2(char *str)
{
	int i = 0;
	int t = 0;
	char *y = str;
	int m;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	t = i - 1;
	for (m = 0; m <= t; m++)
	{
		if (m % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
