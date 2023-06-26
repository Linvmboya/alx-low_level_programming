#include "main.h"
/**
 * _puts - is a function that prints a string
 * @str: is the string to be printed
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
