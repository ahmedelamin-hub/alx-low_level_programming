#include <stdlib.h>
#include <stdio.h>
/**
 * main - a function that multiplies numbers
 * @argc: the argc
 * @argv: the argv
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
