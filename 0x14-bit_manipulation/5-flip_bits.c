#include "main.h"

/**
 * flip_bits - Returns bits number needed to flip to transform an input
 * @n: First unsigned long integer
 * @m: Second unsigned long integer
 * Return: number of bit flips needed to go from "n" to "m" or vice versa
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusiveor_result = n ^ m;
	unsigned int bitflipcount = 0;

	while (exclusiveor_result > 0)
	{
		bitflipcount += exclusiveor_result & 1;
		exclusiveor_result >>= 1;
	}
	return (bitflipcount);
}
