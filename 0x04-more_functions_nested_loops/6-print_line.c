#include "main.h"
/**
 * print_line -A function that draws a traight line
 * @n: is the number of times the character is to be printed
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
