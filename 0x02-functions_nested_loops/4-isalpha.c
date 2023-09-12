#include "main.h"

/**
 * _isalpha - Function that checks for alphabetic character.
 * @c: parameter to be checked.
 * Return: 1 or 0.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
