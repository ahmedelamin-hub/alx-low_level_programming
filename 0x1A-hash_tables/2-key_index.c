#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in a hash table array
 * @key: The key
 * @size: The size of the array of the hash table
 *
 * Description: This function calculates the index
 *
 * Return: The index at which the key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val;

	hash_val = hash_djb2(key);

	return (hash_val % size);
}
