#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - a function that prints any arg
 * @format: specifier for arg
 *
 * Return: args given
 */
void print_all(const char * const format, ...)
{
	if (format != NULL)
	{
		int x = 0;
		char *str;
		va_list args;

		va_start(args, format);

		while (format[x] != '\0')
		{
			switch (format[x])
			{
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s", str);
					break;
				default:
					break;
			}

			if (format[x + 1] != '\0' &&
					(format[x] == 'c' || format[x] == 'i' ||
					 format[x] == 'f' || format[x] == 's'))
			{
				printf(", ");
			}
			x++;
		}

		va_end(args);
	}

	printf("\n");
}
