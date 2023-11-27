#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: file
 * @text_content: content to fill file with
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int f, wr_res;
	mode_t per = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	{
		return (-1);
	}

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, per);
	if (f == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		wr_res = write(f, text_content, strlen(text_content));
		if (wr_res == -1)
		{
			close(f);
			return (-1);
		}
	}

	close(f);
	return (1);
}
