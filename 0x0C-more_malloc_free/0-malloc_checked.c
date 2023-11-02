#include "main.h"

/**
 * malloc_checked - A function that allocates memory
 * @b: size
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
