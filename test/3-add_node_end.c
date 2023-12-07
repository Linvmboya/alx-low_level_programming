#include "lists.h"
/**
 * add_node_end - function that adds new node at the end of a list
 * @head: a linked list
 * @str: a string to be added to the node
 * Return: address of new element, or NULL otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *old_node;
	size_t x;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (x = 0; str[x]; x++)
		;
	new_node->len = x;
	new_node->next = NULL;
	old_node = *head;
	if (old_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (old_node->next != NULL)
			old_node = old_node->next;
		old_node->next = new_node;
	}
	return (*head);
}

