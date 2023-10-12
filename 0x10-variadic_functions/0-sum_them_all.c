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
	va_list ap;/*create a list to hold the variable arguments*/
	unsigned int i;/*variable to use as a loop counter*/
	int sum = 0;/*Initializes variable sum to keep track of total sum*/

	va_start(ap, n);

	for (i = 0; i < n; i++)/*loop iterates through variable arguments*/
		/*Uses va_arg to retrieve each argument from the va_list*/
		/*and adds it to the sum*/
		sum += va_arg(ap, int);

	/*va_end cleans up the va_list object ap, allowing the program*/
	/*to release any resources associated with it*/
	va_end(ap);

	/*returns the calculated sum of all the arguments*/
	return (sum);
}

