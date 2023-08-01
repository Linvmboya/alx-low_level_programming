#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a linked list
 *@head: pointer to the address of the first node of the list
 *@n: element to be inserted to the new node
 *Return: address of the new element, otherwise NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
