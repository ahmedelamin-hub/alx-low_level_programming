#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes index of a dlistint_t list.
 * @head: Pointer to a pointer
 * @index: Index
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *now, *temporaryass;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	now = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(now);
		return (1);
	}

	while (i < index)
	{
		if (!now)
			return (-1);
		now = now->next;
		i++;
	}

	if (!now)
		return (-1);

	temporaryass = now->prev;
	temporaryass->next = now->next;

	if (now->next)
		now->next->prev = temporaryass;

	free(now);

	return (1);
}

