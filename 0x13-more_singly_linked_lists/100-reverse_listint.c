#include "lists.h"
/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to the address of the head
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head = next;
	}
	*head = prevnode;
	return (*head);
}
