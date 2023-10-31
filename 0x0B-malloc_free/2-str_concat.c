#include "main.h"

/**
 * str_concat - a function which points to new space,s1 and s2
 * @s1: first string
 * @s2: second  string
 * Return: new space,s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int s1l = 0;
	int s2l = 0;
	int x;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x] != '\0'; x++)
		s1l++;
	for (x = 0; s2[x] != '\0'; x++)
		s2l++;

	output = malloc(sizeof(char) * (s1l + s2l) + 1);

	if (output == NULL)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
		output[x] = s1[x];
	for (x = 0; s2[x] != '\0'; x++)
		output[s1l + x] = s2[x];
	return (output);
}
