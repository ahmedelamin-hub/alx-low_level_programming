#include "main.h"

/**
 * create_array - function that creates array of char
 * @size: the size of the array
 * @c: the charachter we want to store in the array
 * Return: the pointer or null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		arr[x] = c;
	return (arr);

}
