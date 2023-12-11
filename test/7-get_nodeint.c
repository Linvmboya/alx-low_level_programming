#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: pointer to the head of a node
 * @index: index of the node
 * Return: the nth node, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *p = head;

	while (p && m < index)
	{
		p = p->next;
		m++;
	}
	return (p ? p : NULL);
}
