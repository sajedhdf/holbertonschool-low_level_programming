#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node at the end of a list_t list
 * @head: pointer to head
 * @str: string to add
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
 {
	list_t *new = malloc(sizeof(list_t));
	list_t *tmp = *head;

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;
	return (new);
}
