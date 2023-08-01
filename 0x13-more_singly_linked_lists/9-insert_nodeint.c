#include "lists.h"
/**
 * insert_nodeint_at_index - it inserts a new node at a given position
 * @head: pointer to the address of the head of a list
 * @n: element in the new node
 * Return: address of the new node, or NULL if it fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *newnode, *p = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (m = 0; p && m < idx; m++)
	{
		if (m == idx - 1)
		{
			newnode->next = p->next;
			p->next = newnode;
			return (newnode);
		}
		else
			p = p->next;
	}
	return (NULL);
}

