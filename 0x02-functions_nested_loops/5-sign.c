#include "main.h"
/**
 * print_sign -Prints the sign of a number
 * @n: The number to be printed
 * Return: 1 if it's positive, -1 if it's negative else 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
