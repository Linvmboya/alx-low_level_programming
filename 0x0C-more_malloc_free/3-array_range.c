#include "main.h"
#include <stdlib.h>
/**
 * array_range - A function that creates an array of integers
 * @min: is the minimum range of values
 * @max: the maximum range of values stored
 * Return: a pointer to a newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int n, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (n = 0; min <= max; n++)
		ptr[n] = min++;
	return (ptr);
}
