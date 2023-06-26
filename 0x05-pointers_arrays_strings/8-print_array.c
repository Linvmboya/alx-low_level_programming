#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: the name of array
 * @n: the number of elements of the array
 * Return: display numbers as they are stored in the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d,", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
}
