#include "lists.h"

/**
 * free_list - a funct that frees
 * @head: pointer
 *
 * Description: frees nodes
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)

	{
		list_t *next = temp->next;

		free(temp->str);
		free(temp);
		temp = next;
	}
}

