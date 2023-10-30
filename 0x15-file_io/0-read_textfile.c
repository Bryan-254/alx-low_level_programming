#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stddef.h>

/**
 * read_textfile - Reads text file and prints it to POSIX standard output
 * @filename: Pointer to the file name
 * @letters: Number of letters it should read and print
 * Return: actual number of letters it could read and print or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;

	if (filename == NULL)
		return (0);

	FILE *fp;

	fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);

	ssize_t readbytes;
	char *buffer = malloc(letters);

	if (buffer == NULL)
		fclose(fp);
		return (0);

	readbytes = fread(buffer, 1, letters, fp);

	if (readbytes <= 0)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	ssize_t writtenbytes;

	writtenbytes = write(STDOUT_FILENO, buffer, readbytes);

	fclose(fp);
	free(buffer);

	if (readbytes < 0 || (ssize_t)writtenbytes != readbytes)
	{
		return (0);
	}
	return (readbytes);
}
