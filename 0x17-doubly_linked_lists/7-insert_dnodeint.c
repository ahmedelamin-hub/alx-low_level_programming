#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node
 * @h: Pointer head of the doubly linked list.
 * @idx: Index
 * @n: Value
 *
 * Return: Address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *c;
	unsigned int x = 0;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	c = *h;
	while (x < idx - 1)
	{
		if (c == NULL)
		{
			free(new);
			return (NULL);
		}
		c = c->next;
		x++;
	}

	new->prev = c;
	new->next = c->next;

	if (c->next != NULL)
		c->next->prev = new;

	c->next = new;

	return (new);
}

