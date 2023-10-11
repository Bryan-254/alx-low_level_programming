#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * main - Prints the opcodes of the main function.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 or 1 or 2.
 */

int main(int argc, char *argv[])
{
	if (argc != 2)  /*Checking if the number of arguments is incorrect*/
	{
		printf("Error\n");
		printf("Usage: ./main number_of_bytes\n");
		exit(1);  /*Exiting the program with a status of 1*/
	}

	int numBytes = atoi(argv[1]);  /*Converting the argument to an integer*/

	if (numBytes < 0) /*Checking if the number of bytes is negative*/
	{
		printf("Error\n");
		exit(2);  /* Exiting the program with a status of 2*/
	}

	/*Getting main function address*/
	unsigned char *mainAddress = (unsigned char *) main;

	printf("Opcode of main function:\n");

	for (int i = 0; i < numBytes; i++)
	{
		printf("%02x ", mainAddress[i]);  /*Printing opcode in hexadecimal format*/
	}

	printf("\n");

	return (0);
}
