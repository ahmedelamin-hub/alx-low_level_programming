#include "lists.h"

/**
 * free_dlistint - Function Frees a dlistint_t list.
 * @head: Pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *now, *next;

	now = head;
	while (now != NULL)
	{
		next = now->next;
		free(now);
		now = next;
	}
}
