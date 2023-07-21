#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter of an array
 * @array: is an array
 * @size: size of array to print
 * @action: a pointer to the function
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (m = 0; m < size; m++)
	{
		action(array[m]);
	}
}
