#include "lists.h"

/**
 * print_dlistint - function that prints elements
 *
 * @h: head
 * Return: nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int place;

	place = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		place++;
		h = h->next;
	}

	return (place);
