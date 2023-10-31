#include "main.h"
#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long int a = 1, b = 2, sum = 0, next;
	int x;

	for (x = 1; x <= 33; ++x)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			sum = sum + a;
		}
		next = a + b;
		a = b;
		b = next;
	}
	printf("%lu\n", sum);
	return (0);
}
