#include "lists.h"

/**
 * free_listint - a function that frees a list
 * @head: pointer
 */

void free_listint(listint_t *head)
{
	listint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
