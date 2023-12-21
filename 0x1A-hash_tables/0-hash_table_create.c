#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - This function creates a hash table.
 * @size: This parameter is the size of the array.
 * Return: Pointer to the newly created hash table, or NULL if error occurs.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_tbl;
	unsigned long int x;

	/*Allocate memory for the hash table structure*/
	hash_tbl = malloc(sizeof(hash_table_t));

	if (hash_tbl == NULL)
	{
		return (NULL);
	}

	/*Allocate memory for the array of pointers to hash nodes*/
	hash_tbl->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_tbl->array == NULL)
	{
		free(hash_tbl);
		return (NULL);
	}

	/*Initialize each element of the array to NULL*/
	for (x = 0; x < size; ++x)
	{
		hash_tbl->array[x] = NULL;
	}

	/*Set the size of the hash table*/
	hash_tbl->size = size;

	return (hash_tbl);
}
