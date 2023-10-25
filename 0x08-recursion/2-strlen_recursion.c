#include "main.h"

/**
 * _strlen_recursion - function which finds length of string
 * @s: the string we want to get the length of
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
