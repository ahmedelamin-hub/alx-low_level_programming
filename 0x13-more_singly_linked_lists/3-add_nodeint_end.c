#include "lists.h"

/**
 * add_nodeint_end - a function that adds node at end
 * @head: pointer
 * @n: value
 * Return: address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *t;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		t = *head;
		while (t->next != NULL)
		{
			t = t->next;
		}
		t->next = new;
	}
	return (new);
}
