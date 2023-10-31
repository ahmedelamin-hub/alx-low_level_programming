#include "main.h"

/**
 * _strdup - function that returns duplicate pointer
 * @str: the string
 * Return: Null if str=Null
 */

char *_strdup(char *str)
{
	int x;
	char *copy;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		count++;

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
		copy[x] = str[x];

	return (copy);
}
