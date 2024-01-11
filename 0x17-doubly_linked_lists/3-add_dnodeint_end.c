#include "lists.h"

/**
 * add_dnodeint_end - Adds a new nod
 * @head: Pointer to a pointe
 * @n: Value
 *
 * Return: Address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temporarypointer;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	temporarypointer = *head;
	while (temporarypointer->next != NULL)
		temporarypointer = temporarypointer->next;

	new->prev = temporarypointer;
	temporarypointer->next = new;

	return (new);
}
