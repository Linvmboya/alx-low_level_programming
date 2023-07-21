#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters passed to the function
 * @...: a variable number of parameters
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list q;
	unsigned int m, sum = 0;

	va_start(q, n);

	for (m = 0; m < n; m++)
	{
		sum += va_arg(q, int);
	}
	va_end(q);
	return (sum);
}
