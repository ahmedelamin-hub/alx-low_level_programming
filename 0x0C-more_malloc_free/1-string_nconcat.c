#include "main.h"

/**
 * string_nconcat - a function which concatinates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: bytes to concatinate s1 to s2
 * Return: string to be concat
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x;
	unsigned int s1l = 0;
	unsigned int s2l = 0;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x] != '\0'; x++)
		s1l++;
	for (x = 0; s2[x] != '\0'; x++)
		s2l++;

	output = malloc(sizeof(char) * (s1l + n) + 1);
	if (output == NULL)
		return (NULL);
	if (n >= s2l)
	{
		for (x = 0; s1[x] != '\0'; x++)
			output[x] = s1[x];
		for (x = 0; s2[x] != '\0'; x++)
			output[s1l + x] = s2[x];
		output[s1l + x] = '\0';
	}
	else
	{
		for (x = 0; s1[x] != '\0'; x++)
			output[x] = s1[x];
		for (x = 0; x < n; x++)
			output[s1l + x] = s2[x];
	}
	return (output);
}
