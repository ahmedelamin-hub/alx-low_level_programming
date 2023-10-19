#include "main.h"

/**
 * rot13 - a function that will encode a string
 * @str: the string that we will encode
 *
 * Return: pointer to be encoded
 */

char *rot13(char *str)
{
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int x;
	int y;

	for (x = 0; str[x]; x++)
	{
		for (y = 0; upper[y]; y++)
		{
			if (str[x] == upper[y])
			{
				str[x] = rot13[y];
				break;
			}
		}
	}
	return (str);
}
