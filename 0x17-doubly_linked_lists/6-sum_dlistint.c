#include "lists.h"

/**
 * sum_dlistint - Returns the data dlistint_t list.
 * @head: Pointer
 *
 * Return: Sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *now = head;

	while (now != NULL)
	{
		total += now->n;
		now = now->next;
	}

	return (total);
}
