#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in a hash table array
 * @key: The key
 * @size: The size of the array of the hash table
 *
 * Description: This function calculates the index at which the key/value pair
 * should be stored in the array of the hash table. It uses the hash_djb2
 * function to generate a hash value for the key, and then it finds the
 * index by taking the modulo of the hash value with the size of the array.
 *
 * Return: The index at which the key/value pair should be stored in the
 * array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val;

	hash_val = hash_djb2(key);

	return (hash_val % size);
}
