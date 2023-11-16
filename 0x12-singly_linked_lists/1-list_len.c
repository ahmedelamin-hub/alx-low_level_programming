#include "lists.h"

/**
 * list_len - a function that finds length
 * @h: nodes
 * Return: length
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
