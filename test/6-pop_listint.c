#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: pointer to the address of the head of a node in a list
 * Return: head nodes data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int m;

	if (!head || !*head)
		return (0);
	m = (*head)->n;
	p = (*head)->next;
	free(*head);
	*head = p;
	return (m);
}
