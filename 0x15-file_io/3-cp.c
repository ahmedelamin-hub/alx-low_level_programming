#include "main.h"

#define b_size 1024

/**
 * main - a function that copes file content
 * @argc: arguments numb
 * @argc: array args
 *
 * Return: 0 or error
 */

int main(int argc, char **argv)
{
	int f_ft, f_t, read_res, write_res;
	char buffer[b_size];

	if (argc != 3)
	{
		dprintf(2, "usage is %s f_ft f_t\n", argv[0]);
		exit(97);
	}

	f_ft = open(argv[1], O_RDONLY);
	if (f_ft == -1)
	{
		dprintf(2, "Error:0;file cant be read %s\n", argv[1]);
		exit(98);
	}

	f_t = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (f_t == -1)
	{
		dprintf(2, "Error: cant write %s\n", argv[2]);
		close(f_ft);
		exit(98);
	}

	while ((read_res = read(f_ft, buffer, b_size)) > 0)
	{
		write_res = write(f_t, buffer, read_res);
		if (write_res == -1)
		{
			dprintf(2, "Error cant write to %s\n", argv[2]);
			close(f_ft);
			close(f_t);
			exit(98);
		}
	}

	if (read_res == -1)
	{
		dprintf(2, "Error: cant read from %s\n", argv[1]);
		close(f_ft);
		close(f_t);
		exit(98);
	}

	if (close(f_ft) == -1)
	{
		dprintf(2, "Error: cant close f %d\n", f_ft);
		exit(100);
	}

	if (close(f_t) == -1)
	{
		dprintf(2, "Error: cant close f %d\n", f_t);
		exit(100);
	}

	return (0);
}
