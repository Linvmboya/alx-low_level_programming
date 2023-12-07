#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: the linked list
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *old_node;

	while ((old_node = head) != NULL)
	{
		head = head->next;
		free(old_node->str);
		free(old_node);
	}
}
