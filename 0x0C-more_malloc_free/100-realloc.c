#include "main.h"
#include <stdlib.h>
/**
 * _realloc - It reallocates a memory block using malloc and free
 * @ptr: Is a pointer to the previous memory
 * @old_size: The size of previous memory allocated for ptr
 * @new_size: The new size of memory block
 * Return: pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrb;
	char *old_ptr;
	unsigned int m;

	if (new_size == old_size)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptrb = malloc(new_size);
	if (!ptrb)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (m = 0; m < new_size; m++)
			ptrb[m] = old_ptr[m];
	}
	if (new_size > old_size)
	{
		for (m = 0; m < old_size; m++)
			ptrb[m] = old_ptr[m];
	}
	free(ptr);
	return (ptrb);
}
