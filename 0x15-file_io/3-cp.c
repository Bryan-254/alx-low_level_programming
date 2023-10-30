#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - program that copies the file content to another file
 * @argc: This parameter is the argument counter
 * @argv: This parameter is the list of arguments
 * Return: 97 or 98 or 99 or 100
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, rd_from, cl_from, cl_to;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);

	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);

	rd_from = read(file_from, buffer, 1024);

	while (rd_from > 0)
	{
		if (file_to < 0 || (write(file_to, buffer, rd_from) != rd_from))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		rd_from = read(file_from, buffer, 1024);
	}
	if (rd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cl_from = close(file_from);

	if (cl_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from);
		exit(100);
	}
	cl_to = close(file_to);

	if (cl_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_to);
		exit(100);
	}
	return (0);
}
