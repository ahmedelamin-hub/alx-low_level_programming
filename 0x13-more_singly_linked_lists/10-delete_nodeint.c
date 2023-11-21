#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes nodes
 * @head: pointer
 * @index: index
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t, *prev;
	unsigned int x;

	if (head == NULL || *head == NULL)
		return (-1);

	t = *head;
	prev = NULL;

	for (x = 0; x < index && t != NULL; x++)
	{
		prev = t;
		t = t->next;
	}

	if (t == NULL)
		return (-1);
	if (prev == NULL)
	{
		*head = t->next;
	}
	else
	{
		prev->next = t->next;
	}
	free(t);
	return (1);
}

