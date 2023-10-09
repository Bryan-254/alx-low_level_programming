#include <stdio.h>
#include <stdlib.h>

/**
 * printFileName - This function prints the file name
 * Return: void
 */

void printFileName(void)
{
	printf("Compiled from file: %s\n", __FILE__);
}

/**
 * main - The main method
 * Return: void
 */

int main(void)
{
	printFileName();
	return (0);
}
