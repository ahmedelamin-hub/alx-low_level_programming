#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>

/**
 * append_text_to_file - a function that appends
 * @filename: name file
 * @text_content: NULL-terminated string
 *
 * Return: 1 on success, -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, wr_res;

	if (filename == NULL)
	{
		return (-1);
	}

	f = open(filename, O_WRONLY | O_APPEND);
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
