#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: the list
 * @str: a string to be added to the node
 * Return: address of new element, otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p;
	int length = 0;

	p = malloc(sizeof(list_t));
	if (p == NULL)
		return (NULL);
	while (str[length])
		length++;
	p->len = length;
	p->str = strdup(str);
	p->next = *head;
	*head = p;
	return (p);
}

