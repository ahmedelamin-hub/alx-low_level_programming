#include "3-calc.h"
#include <string.h>
#include <stdio.h>

/**
 * get_op_func - a funcction that gets operation func
 * @s: operator
 *
 * Return: pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int z = 0;

	while (ops[z].op != NULL)
	{
		if (strcmp(s, ops[z].op) == 0)
			return (ops[z].f);
		z++;
	}
	return (NULL);
}
