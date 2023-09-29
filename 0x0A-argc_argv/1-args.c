#include <stdio.h>

/**
 * main - Program that prints the number of arguments passed into it
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	/*We use -1 to get the exact argument without the file name being included*/
	printf("%d\n", argc - 1);
	return (0);
}
