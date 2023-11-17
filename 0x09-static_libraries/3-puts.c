#include "main.h"
/**
 * _puts - A function that prints a string to the stdout
 * @s: The string
 * _putchar prints new line
 * Return: 0
 */
void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
