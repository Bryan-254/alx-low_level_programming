#include "hash_tables.h"

/**
 * hash_table_get - This function retrieves the value associated with a key.
 * @ht: This paraeter is a pointer to the hash table.
 * @key: The key to get the value of.
 * Return: Returns the value associated with the element,
 * or NULL if key couldn’t be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_node;
	unsigned long int slot;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	slot = key_index((const unsigned char *)key, ht->size);

	if (slot >= ht->size)
	{
		return (NULL);
	}

	current_node = ht->array[slot];

	while (current_node && strcmp(current_node->key, key) != 0)
	{
		current_node = current_node->next;
	}

	return ((current_node == NULL) ? NULL : current_node->value);
}
