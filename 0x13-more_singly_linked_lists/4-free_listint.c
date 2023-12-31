#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: a pointer to the head of the linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
