/**
 * hash_djb2 - Implements the djb2 algorithm
 * @str: The string to hash
 *
 * Description: This function implements the djb2 hash algorithm, a simple
 * and effective hash function for strings. The hash value is calculated
 * using bitwise operations and addition, ensuring a wide distribution
 * of hash values for varied input strings.
 *
 * Return: The hash value as an unsigned long int.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

