#include "lists.h"

/**
 * free_listint2 - a function that frees
 * @head: pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
	}
}

