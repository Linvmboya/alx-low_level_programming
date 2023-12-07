#include "lists.h"
/**
 * list_len - it writes the number of elements in a linked list_t list
 * @h: is a linked list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
