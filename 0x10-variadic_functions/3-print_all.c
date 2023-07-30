#include "variadic_functions.h"
/**
 * print_all - program that prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *q = "";

	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", q, va_arg(list, int));
					break;
					case 'i':
					printf("%s%d", q, va_arg(list, int));
					break;
					case 'f':
					printf("%s%f", q, va_arg(list, double));
					break;
					case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", q, str);
					break;
					default:
					i++;
					continue;
			}
			q = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}


