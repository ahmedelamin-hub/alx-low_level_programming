#include "main.h"

/**
 * string_toupper - a function which changes lowercase to uppercase
 * @str: string where we will change lowercase to upper
 *
 * Return: pointer
 */

char *string_toupper(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] - 'a' + 'A';
		}
		x++;
	}
	return (str);
}
