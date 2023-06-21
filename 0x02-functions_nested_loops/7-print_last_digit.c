#include "main.h"
/**
 * print_last_digit -Prints the last digit of a number
 * @i: The value to be printed
 * Return: the value of the last digit
 */
int print_last_digit(int i)
{
	int n;

	n = i % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar(n + '0');
		return (n);
}

