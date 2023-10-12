#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 1, x <= 100 ; x++)
	{
		if (x % 3 == 0)
			printf("%s", "Fizz");
		else if (x % 5 == 0)
			printf("%s", "Buzz");
		else if ((x % 3 == 0) && (x % 5 == 0))
			printf("%s", "FizzBuzz");
		else
			print("%d", x);
		if (x != 100)
			printf(" ");
	}
}
