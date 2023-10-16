#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string char to be reversed
 */

void rev_string(char *s)
{
	int l = 0;
	int x;
	char t;

	while (s[l] != '\0')
	{
		l++;
	}

	for (x = 0; x < l / 2; x++)
	{
		t = s[x];
		s[x] = s[l - x - 1];
		s[l - x - 1] = t;
	}
}
