#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - Function that creates a file.
 * @filename: Name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fl;
	char *p;
	int leng = 0, inleng = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fl == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (inleng = 0, p = text_content; *p; p++)
			inleng++;
		leng = write(fl, text_content, inleng);
	}

	if (close(fl) == -1 || inleng != leng)
	{
		return (-1);
	}

	return (1);
}
