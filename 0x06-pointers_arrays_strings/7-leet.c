#include "main.h"

/**
 * leet - function that makes string 1337
 * @str: the string
 *
 * Return: pointer
 */

char *leet(char *str)
{
	char *leet_r = "aAeEo0tT1L";
	char *leet_c = "4433007711";
	int x;
	int y;

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; leet_r[y] != '\0' ; y++)
		{
			if (str[x] == leet_r[y])
			{
				str[x] = leet_c[y];
				break;
			}
		}
	}
	return (str);
}



