/*
 * File: 100-print_comb3.c
 * Auth: Bryan-254
 */

#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int x;
	int i;

	x = i = '0';

	for (x = '0'; x <= '9'; x++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			putchar(x);
			putchar(i);

			if ((x != '9') || (x == '9' && i != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
