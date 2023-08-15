#include "main.h"
/**
 *print_binary - prints the binary representation of a number
 *@n: the number whose binary representation is to be printed
 */
void print_binary(unsigned long int n)
{
	int m, count = 0;
	unsigned long int num;

	for (m = 63; m >= 0; m--)
	{
		num = n >> m;
		if (num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
