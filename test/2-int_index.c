#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer by comparing values
 * @array: the array to be searched
 * @size: the number of elements in the array
 * @cmp: a pointer to the function usec to compare values
 * Return: -1 if no element matches, else return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]))
		return (m);
	}
	return (-1);
}
