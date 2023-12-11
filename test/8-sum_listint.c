#include "lists.h"
/**
 * sum_listint - returns sum of all the data (n) of a linked list
 * @head: pointer to the head of the linked list
 * Return: sum of all data in the linked list, otherwise 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *p = head;

	while (p)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
