#include "lists.h"

/**
 * get_dnodeint_at_index - Returns 9th node
 * @head: Pointer to the head
 * @index: Index
 *
 * Return: Pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num = 0;
	dlistint_t *now = head;

	while (now != NULL)
	{
		if (num == index)
			return (now);

		num++;
		now = now->next;
	}

	return (NULL);
}
