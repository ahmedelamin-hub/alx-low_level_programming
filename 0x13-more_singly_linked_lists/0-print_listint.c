#include "lists.h"
#include <stddef.h>
#include <stdio.h>


/**
 * print_listint - a function that prints elements in list
 * @h: pointer
 * Return: nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
