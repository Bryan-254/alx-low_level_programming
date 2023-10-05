#include "main.h"

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: The string 1
 * @s2: The string 2
 * @n: The number of bytes
 * Return: point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len = 0; /*This will hold length of s1*/
	unsigned int s2len = 0; /*This will hold length of s2*/
	char *m; /*This pointer holds return value of malloc*/
	unsigned int x; /*This variable is used as a loop iterator*/

	if (s1 == NULL) /*s1 is treated as an empty string if NULL*/
		s1 = "";
	if (s2 == NULL) /*s2 is treated as an empty string if NULL*/
		s2 = "";
	for (x = 0 ; s1[x] != '\0' ; x++) /*Finding length of s1*/
		s1len++; /*an increment operation on the variable s1len*/
	for (x = 0 ; s2[x] != '\0' ; x++) /*Finding length of s2*/
		s2len++; /*an increment operation on the variable s2len*/

	/*Allocate the memory*/
	/*Allocates memory based on s1 length and the value of n bytes of s2*/
	/*The +1 takes into consideration the space for the null terminator*/
	m = malloc(sizeof(char) * (s1len + n) + 1);

	/*If malloc fails to allocate*/
	if (m == NULL)
		return (NULL);
	/*If n is greater or equal to the length of s2*/
	if (n >= s2len)
	{
		for (x = 0 ; s1[x] != '\0' ; x++) /*Loops over the entire s1*/
			m[x] = s1[x]; /*Concatenates entire content of s1 inside new memory*/
		for (x = 0 ; s2[x] != '\0' ; x++) /*Loops over the entire s2*/
			m[s1len + x] = s2[x];
		m[s1len + x] = '\0'; /*Add terminator at last index*/
	}
	else
	{
		for (x = 0 ; s1[x] != '\0' ; x++)
			m[x] = s1[x];
		for (x = 0 ; x < n ; x++)
			m[s1len + x] = s2[x];
		m[s1len + x] = '\0';
	}
	return (m);
}
