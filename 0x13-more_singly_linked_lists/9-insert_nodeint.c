#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts nodes
 * @head: pointer
 * @idx: index
 * @n: value assigned to node
 * Return: address of node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *t;
	unsigned int x;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	t = *head;

	for (x = 0; x < idx - 1 && t != NULL; x++)
	{
		t = t->next;
	}
	if (t == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = t->next;
	t->next = new;

	return (new);
}

