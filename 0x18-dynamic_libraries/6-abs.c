#include "main.h"
/**
 * _abs - function for abs value
 * @x: param numb
 * Return: x or -x;
 */

int _abs(int x)
{
	if (x < 0)
		return (-x);
	else if (x >= 0)
	{
		return (x);
	}

	return (0);
}

