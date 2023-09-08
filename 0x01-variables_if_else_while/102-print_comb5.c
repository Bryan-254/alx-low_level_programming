#include <stdio.h>

/**
 * main - prints all possible different combinations of two two-digits
 * in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1; num2 <= 99; num2++)
		{
			int digit1_1 = num1 / 10;
			int digit1_2 = num1 % 10;
			int digit2_1 = num2 / 10;
			int digit2_2 = num2 % 10;

			/* Check if the combination is in ascending order */
			if (num1 <= num2)
			{
				/* Print the first two digits */
				putchar(digit1_1 + '0');
				putchar(digit1_2 + '0');

				putchar(' ');

				/* Print the second two digits */
				putchar(digit2_1 + '0');
				putchar(digit2_2 + '0');

				/* Check if it's not the last combination */
				if (!(num1 == 99 && num2 == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

