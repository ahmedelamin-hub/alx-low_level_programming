#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 *
 * @size: The size of the array in the hash table
 *
 * Return: A pointer to the newly created hash table, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table;
    unsigned long int i;

    /* Allocate memory for the hash table structure */
    new_table = malloc(sizeof(hash_table_t));
    if (new_table == NULL)
        return NULL;

    /* Initialize the elements of the hash table */
    new_table->size = size;
    new_table->array = malloc(sizeof(hash_node_t *) * size);

    if (new_table->array == NULL)
    {
        free(new_table);
        return NULL;
    }

    /* Initialize all the array elements to NULL */
    for (i = 0; i < size; i++)
        new_table->array[i] = NULL;

    return new_table;
}

