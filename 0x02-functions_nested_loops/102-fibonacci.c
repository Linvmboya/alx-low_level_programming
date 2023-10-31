#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int sum, num1 = 0, num2 = 0;
	int count;

	for (count = 0; count < 50; count++)
	{
		sum = num1 + num2;
		printf("%lu", sum);

		num1 = num2;
		num2 = sum;
		if (count == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
