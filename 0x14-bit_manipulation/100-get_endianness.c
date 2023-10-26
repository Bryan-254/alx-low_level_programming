#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 *
 * Return: 1 if system is little-endian and 0 if its big-endian
 */

int get_endianness(void)
{
	unsigned short number = 0x01;

	unsigned char *p = (unsigned char *)&number;

	return ((p[0] == 0x01) ? 1 : 0);
}
