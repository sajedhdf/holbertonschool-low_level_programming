#include <stdio.h>
#include <string.h>
#include "list.h"


/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the first node of the list
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str)
			printf("[%lu] %s\n", strlen(h->str), h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		i++;
	}

	return (i);
}
