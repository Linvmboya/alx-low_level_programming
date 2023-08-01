#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 *looped_listint_len - counts unique nodes in a looped list
 *@head: pointer to the head of list
 *Return: number of unique nodes in the list, else 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *p, *q;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	p = head->next;
	q = (head->next)->next;
	while (q)
	{
		if (p == q)
		{
			p = head;
			while (p != q)
			{
				nodes++;
				p = p->next;
				q = q->next;
			}
			p = p->next;
			while (p != q)
			{
				nodes++;
				p = p->next;
			}
			return (nodes);
		}
		p = p->next;
		q = (q->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - prints a listint_safe
 * @head: pointer to the head
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t m, ind = 0;

	m = looped_listint_len(head);
	if (m == 0)
	{
		for (; head != NULL; m++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (ind = 0; ind < m; ind++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p]%d\n", (void *)head, head->n);
	}
	return (m);
}
