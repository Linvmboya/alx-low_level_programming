#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array and initializes it with specifier char
 * @size: size of array
 * @c: character to assign
 * Return: a pointer to an array, else 0 if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int m;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (m = 0; m < size; m++)
		str[m] = c;
	return (str);
}
