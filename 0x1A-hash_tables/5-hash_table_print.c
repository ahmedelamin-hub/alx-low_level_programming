#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to be printed
 *
 * Description: This function prints all the key/value pairs in the hash table
 * in the order they appear in the array of the hash table. Each key/value
 * pair is printed in the format: {'key': 'value'}.
 * If the hash table is NULL, nothing is printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *rtt;
	int flagged = 0;  /* Flag to print commas between elements */

	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		rtt = ht->array[x];
		while (rtt != NULL)
		{
			if (flagged)
				printf(", ");
			printf("'%s': '%s'", rtt->key, rtt->value);
			flagged = 1;
			rtt = rtt->next;
		}
	}
	printf("}\n");
}

