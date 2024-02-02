#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

int update_value(hash_node_t *current_node, const char *value);
hash_node_t *create_new_node(const char *key, const char *value);

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to add or update the key/value
 * @key: The key, cannot be an empty string
 * @value: The value associated with the key, must be duplicated
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_index;
	hash_node_t *current_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	hash_index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[hash_index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (update_value(current_node, value));

		current_node = current_node->next;
	}

	current_node = create_new_node(key, value);
	if (!current_node)
		return (0);

	current_node->next = ht->array[hash_index];
	ht->array[hash_index] = current_node;

	return (1);
}

/**
 * update_value - Updates the value of a node
 * @current_node: The node to update
 * @value: The new value
 *
 * Return: 1 on success, 0 on failure
 */
int update_value(hash_node_t *current_node, const char *value)
{
	free(current_node->value);
	current_node->value = strdup(value);
	return (current_node->value != NULL);
}

/**
 * create_new_node - Creates a new hash table node
 * @key: The key for the new node
 * @value: The value for the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	return (new_node);
}
