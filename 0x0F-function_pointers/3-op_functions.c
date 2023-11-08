#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - A function that adds 2 numbs
 * @x: first int
 * @y: second int
 *
 * Return: addition x and y
 */

int op_add(int x, int y)
{
	return (x + y);
}

/**
 * op_sub - A function that subtracts
 * @x: the first numb
 * @y: the second numb
 *
 * Return: the subtraction of x and y
 */

int op_sub(int x, int y)
{
	return (x-y);
}

/**
 * op_mul - a function that * 2 numbs
 * @x: first int
 * @y: second int
 *
 * Return: multiplication of the 2 ints
 */


int op_mul(int x, int y)
{
	return (x * y);
}

/**
 * op_div - a function that divides 2 numbs
 * @x: first numb
 * @y: second numb
 *
 * Return the result
 */

int op_div(int x, int y)
{
	if (y == 0)
	{
		printf("Errot\n");
		exit(100);
	}
	return (x / y);
}

/**
 * op_mod - a function that calculates module
 * @x: first numb
 * @y: second numb
 *
 * Return: remainder
 */

int op_mod(int x, int y)
{
	if (y == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (x % y);
}


