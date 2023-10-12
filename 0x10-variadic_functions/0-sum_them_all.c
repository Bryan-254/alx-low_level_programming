#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns sum of all its parameters
 * @n: Number of parameters passed
 * @...: The variable number of parameters to calculate sum
 * Return: Sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0) /*If there are no numbers to sum*/
		return (0);

	/*Initialize a variable sum to keep track of the total sum*/
	int sum = 0;

	va_list args;/*create a list to hold the variable arguments*/

	va_start(args, n);/*This starts processing variable arguments*/

	/*Loop to go through each of the variable arguments*/
	for (unsigned int i = 0; i < n; i++)
	{
		/*va_arg(args, int) fetches the next argument from*/
		/*the list and adds it to the running total sum*/
		int num = va_arg(args, int);

		sum += num;
	}

	/*clean up using va_end to release the resources*/
	/*associated with the va_list*/
	va_end(args);

	return (sum);
}
