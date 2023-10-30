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
		fprintf(stderr, "Error: Can't read from file %s\n", file_from);
		return (98);
	}
	if (fdTo == -1)
	{
		fprintf(stderr, "Error: Can't write to file %s\n", file_to);
		close(fdFrom);
		return (99);
	}
	while ((bytesRead = read(fdFrom, buffer, sizeof(buffer))) > 0)
	{
		bytesWritten = write(fdTo, buffer, bytesRead);

		if (bytesWritten == bytesRead)
		{
			fprintf(stderr, "Error: Can't write to file %s\n", file_to);
			close(fdFrom);
			close(fdTo);
			return (99);
		}
	}
	if (close(fdFrom) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fdFrom);
		return (100);
	}
	if (close(fdTo) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fdTo);
		return (100);
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
	int result = copyFile(argv[1], argv[2]);

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
	if (result != 0)
	{
		fprintf(stderr, "Error copying file\n");
		return (result);
	}

	printf("File copied successfully.\n");
	return (0);
}
