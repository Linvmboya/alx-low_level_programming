#include "main.h"
#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci number
 *
 * Return: 0 Always
 */
int main(void)
{
	unsigned long int old2, new2, x, y = 1000000000;
	unsigned long int old1, new1, old = 1, new = 2;

	printf("%lu", old);
	for (x = 1; x < 91; x++)
	{
		printf(", %lu", new);
		new += old;
		old = new - old;
	}
	old1 = (old / y);
	old2 = (old % y);
	new1 = (new / y);
	new2 = (new % y);

	for (x = 92; x < 99; ++x)
	{
		printf(", %lu", new1 + (new2 / y));
		printf("%lu", new2 % y);
		new1 = new1 + old1;
		old1 = new1 - old1;
		new2 = new2 + old2;
		old2 = new2 - old2;
	}
	printf("\n");
	return (0);
}
