#include <stdio.h>

/**
 * first_concern - This function is given priority before main function
 * Return: Void
 */

void __attribute__((constructor)) first_concern()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
