#include "lists.h"

/**
 * add_node_end - a function that add nodes to end
 * @head: head
 * @str: str
 * Return: adress
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nnode, *tp;
	unsigned int x, count = 0;

	nnode = malloc(sizeof(list_t));
	if (nnode == NULL)
		return (NULL);
	nnode->str = strdup(str);
	for (x = 0; str[x] != '\0'; x++)
		count++;
	nnode->len = count;
	nnode->next = NULL;
	tp = *head;

	if (tp == NULL)
		*head = nnode;
	else
	{
		while (tp->next != NULL)
			tp = tp->next;
		tp->next = nnode;
	}
	return (*head);
}
