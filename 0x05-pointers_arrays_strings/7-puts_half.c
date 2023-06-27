#include "main.h"
/**
 * puts_half - is a function tha prints half of a string
 * @str: the string to be printed
 * Return: print tha last n characters of a string
 */
void puts_half(char *str)
{
	int a, n, i;

	i = 0;

	for (a = 0; str[a] != '\0'; a++)
		i++;
	n = (i / 2);
	if ((i % 2) == 1)
		n = ((i + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
