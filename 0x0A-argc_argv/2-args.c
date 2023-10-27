#include <stdio.h>

/**
 * main - A function that prints all recieved args
 * @argc: the argc
 * @argv: the argv
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0 ; x < argc ; x++)
		printf("%s\n", argv[x]);
	return (0);
}
