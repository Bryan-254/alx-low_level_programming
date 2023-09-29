#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that adds positive numbers.
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int y;
	unsigned int x, sum = 0;
	char *b;

	if (argc > 1)
	{
		for (y = 1 ; y < argc ; y++)
		{
			b = argv[y];

			for (x = 0 ; x < strlen(b) ; x++)
			{
				if (b[x] < 48 || b[x] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(b);
			b++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
