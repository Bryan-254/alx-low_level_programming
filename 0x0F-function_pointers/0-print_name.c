#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Function that prints a name
 * @name: The name to be printed
 * @f: The pointer to the function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
