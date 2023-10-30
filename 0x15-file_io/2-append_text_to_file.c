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
		return (-1); /*Indicates failure*/
	}

	/*opens the file for writing and appending*/
	fl = open(filename, O_WRONLY | O_APPEND);

	/*If the file cannot be opened, -1 is failure */
	if (fl == -1)
	{
		return (-1);
	}

	/*Calculating text length. Length stored in inleng variable*/
	for (inleng = 0, p = text_content ; *p ; p++)
	{
		inleng++;
	}

	/*Writes content of text_content to file using the write function*/
	leng = write(fl, text_content, inleng);

	/*close the file using the close function*/
	/*If the close operation fails, -1 is returned*/
	if (close(fl) == -1 || inleng != leng)
	{
		return (-1);
	}
	return (leng);
}
