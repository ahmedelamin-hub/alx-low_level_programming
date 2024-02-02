/**
 * hash_djb2 - Implements the djb2 algorithm
 * @str: The string to hash
 *
 * Description: This function implements the djb2 hash algorithm
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}

