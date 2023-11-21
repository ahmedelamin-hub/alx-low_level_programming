#include "lists.h"

/**
 * pop_listint - a function that deletes node
 * @head: pointer
 * Return: head node or 0
 */
int pop_listint(listint_t **head)
{
	int d;
	listint_t *t;

	if (head == NULL || *head == NULL)
		return (0);

	t = *head;
	d = t->n;
	*head = (*head)->next;
	free(t);

	return (d);
}
