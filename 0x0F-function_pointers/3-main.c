#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * main - the entry point
 * @argc: command line args
 * @argv: array of strings
 *
 * Return: 0 on success or other value
 */

int (*get_op_func(char *s))(int, int);

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	
	num1 = atoi(argv[1]);
       	num2 = atoi(argv[3]);
       	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}
       
	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
