#include <stdio.h>

/**
 * main - function which prints the arguments passed to it
 * @argc: the argc
 * @argv: the argv
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
