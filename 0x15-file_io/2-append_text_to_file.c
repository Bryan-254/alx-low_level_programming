#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * append_text_to_file - Function that appends text at end of file
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl;
	ssize_t leng, inleng;
	char *p;

	if (filename == NULL)
	{
		return (-1);
	}

	fl = open(filename, O_WRONLY | O_APPEND);

	if (fl == -1)
	{
		return (-1);
	}

	for (inleng = 0, p = text_content ; *p ; p++)
	{
		inleng++;
	}

	leng = write(fl, text_content, inleng);

	if (close(fl) == -1 || inleng != leng)
	{
		return (-1);
	}
	return (leng);
}
