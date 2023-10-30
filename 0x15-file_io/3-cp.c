#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

/**
 * copyFile - Copies the content of one file to another file.
 * @fileFrom: The path of the source file.
 * @fileTo: The path of the destination file.
 * Return: 0 if the operation is successful, 1 otherwise.
 */

int copyFile(const char *fileFrom, const char *fileTo)
{
	int fdFrom = open(fileFrom, O_RDONLY);
	int fdTo = open(fileTo, O_RDONLY);
	char buffer[4096];
	ssize_t bytesRead;

	if (fdFrom == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", fileFrom);
		return (-1);
	}

	while ((bytesRead = read(fdFrom, buffer, sizeof(buffer))) > 0)
	{
		ssize_t bytesWritten = write(fdTo, buffer, bytesRead);

		if (bytesWritten == -1)
		{
			perror("Error");
			close(fdFrom);
			close(fdTo);
			return (1);
		}
	}

	close(fdFrom);
	close(fdTo);

	return (0);
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	if (access(argv[1], R_OK) == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	result = copyFile(argv[1], argv[2]);

	if (result != 0)
	{
		return (result);
	}

	return (0);
}
