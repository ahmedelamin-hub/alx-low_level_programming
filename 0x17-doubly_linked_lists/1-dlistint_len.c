#include "lists.h"

/**
 * dlistint_len - number of elements
 * @h: doubly linked list.
 *
 * Return: elements
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t c = 0;

    while (h != NULL)
    {
        c++;
        h = h->next;
    }

    return (c);
}
