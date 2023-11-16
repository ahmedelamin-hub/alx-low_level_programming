#include "lists.h"

/**
 * add_node - a function whichadds nodes to beginneng
 * @head: node
 * @str: string
 * Return: address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nnode;

	unsigned int x, count = 0;

	nnode = malloc(sizeof(list_t));
	if (nnode == NULL)
		return (NULL);
	nnode->str = strdup(str);
	for (x = 0; str[x] != '\0'; x++)
		count++;
	nnode->len = count;
	nnode->next = *head;
	*head = nnode;

	return (*head);
}
