#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: a pointer to the address of head of new node
 * @n: element to be inserted to the new node
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *lastnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = newnode;
	}
	return (*head);
}
