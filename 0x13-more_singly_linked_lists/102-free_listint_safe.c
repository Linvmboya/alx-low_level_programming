#include "lists.h"
/**
 * free_listint_safe - function that frees a listint_t list
 * @h: pointer to the first node of the list
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int diff;
	listint_t *p;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			p = (*h)->next;
			free(*h);
			*h = p;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}
	*h = NULL;
	return (size);
}
