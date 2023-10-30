#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

/**
 * copyFile - Copies the content of one file to another file.
 * @file_from: The path of the source file.
 * @file_to: The path of the destination file.
 * Return: 0 if the operation is successful, 1 otherwise.
 */

int copyFile(const char *file_from, const char *file_to)
{
	int fdFrom = open(file_from, O_RDONLY);
	int fdTo = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	char buffer[4096];
	ssize_t bytesRead;
	ssize_t bytesWritten;

	if (fdFrom  == -1)
	{
		perror("Error opening source file");
		return (1);
	}

	if (fdTo == -1)
	{
		perror("Error opening or creating destination file");
		close(fdFrom);
		return (1);
	}

	while ((bytesRead = read(fdFrom, buffer, sizeof(buffer))) > 0)
	{
		bytesWritten = write(fdTo, buffer, bytesRead);

		if (bytesWritten == bytesRead)
		{
			perror("Error writing to destination file");
			close(fdFrom);
			close(fdTo);
			return (1);
		}
	}

	if (close(fdFrom) == -1 || close(fdTo) == -1)
	{
		perror("Error closing files");
		return (1);
	}

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
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		return (1);
	}

	if (access(argv[1], R_OK) == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		return (1);
	}

	if (copyFile(argv[1], argv[2]) != 0)
	{
		fprintf(stderr, "Error copying file\n");
		return (1);
	}

	printf("File copied successfully.\n");
	return (0);
}
