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
	int file;
	int len, charswritten;
	char *buffer;

	if (filename == NULL || letters == 0)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters));

	if (buffer == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(buffer);
		return (0);
	}
	len = read(file, buffer, letters);

	if (len == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}
	charswritten = write(STDOUT_FILENO, buffer, len);

	free(buffer);
	close(file);
	if (charswritten != len)
	{
		return (0);
	}
	return (len);
}
