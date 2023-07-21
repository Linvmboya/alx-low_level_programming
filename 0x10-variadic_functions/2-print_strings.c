#include "variadic_functions.h"
/**
 * print_strings - it prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: variable number of strings to be printed
 * Description: dont print the separator if its NULL
 * if one of the string is NULL, print (nil) instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list m;
	char *str;
	unsigned int index;

	va_start(m, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(m, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(m);
}
