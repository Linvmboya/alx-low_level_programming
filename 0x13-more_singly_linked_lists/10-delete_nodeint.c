#include "lists.h"
/**
 * delete_nodeint_at_index - it deletes the node at index of a list
 * @head: pointer to the address of the head of list
 * @index: index of the node to be deleted
 * Return: 1 if success, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = *head;
	listint_t *node = NULL;
	unsigned int m = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}
	while (m < index - 1)
	{
		if (!p || !(p->next))
			return (-1);
		p = p->next;
		m++;
	}
	node = p->next;
	p->next = node->next;
	free(node);
	return (1);
}

