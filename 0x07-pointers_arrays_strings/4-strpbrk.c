include "main.h"

/**
 * _strpbrk - Searches for a set of bytes in a string.
 * @s: The string to search.
 * @accept: The set of bytes to search for.
 * Return: A pointer to the first matching byte in `s`,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}

