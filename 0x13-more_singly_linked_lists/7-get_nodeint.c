#include "lists.h"

/**
 * get_nodeint_at_index - Function that Returns nth node
 * @head: pointer
 * @index: index
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *now = head;

	for (x = 0; now != NULL && x < index; x++)
	{
		now = now->next;
	}
	return (now);
}
