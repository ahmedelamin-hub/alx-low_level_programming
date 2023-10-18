#include "main.h"

/**
 * cap_string - function that capatizes the string
 * @str: string that we will capatalize
 *
 * Return: pointer
 */
char *cap_string(char *str)
{
	char s[] = " \t\n,;.!?\"(){}";
	int c = 1;

	for (int x = 0; str[x] != '\0'; x++)
	{
		if (c && str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] -= 32;
			c = 0;
		}
		else
		{
			c = 0;
		}

		for (int y = 0; s[y] != '\0'; y++)
		{
			if (str[x] == s[y])
			{
				c = 1;
				break;
			}
		}
	}

	return (str);
}

