#include "hash_tables.h"

/**
 * key_index - Get the index at which a key/value
 * pair should be stored in array of a hash table.
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 * Return: The index of the key.
 * Description: Calculates the index for a given key in a hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int slot;

	/*Use the hash_djb2 function to get the hash value for the key*/
	hash_value = hash_djb2(key);

	/*Calculate the index by taking the modulus with the size of the hash table*/
	slot = hash_value % size;

	return (slot);
}
