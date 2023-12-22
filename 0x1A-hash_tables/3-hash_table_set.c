#include "hash_tables.h"

/**
 * hash_table_set - This function adds an element in a hash table.
 * @ht: This parameter is a pointer to the hash table.
 * @key: The key to add. Cannot be an empty string.
 * @value: This is the value associated with key.
 * Return: Returns 0 upon failure, otherwise 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_nd;
	char *val_dupl;
	unsigned long int slot, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_dupl = strdup(value);
	if (val_dupl == NULL)
		return (0);

	slot = key_index((const unsigned char *)key, ht->size);
	for (x = slot ; ht->array[x] ; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = val_dupl;
			return (1);
		}
	}

	new_nd = malloc(sizeof(hash_node_t));
	if (new_nd == NULL)
	{
		free(val_dupl);
		return (0);
	}
	new_nd->key = strdup(key);
	if (new_nd->key == NULL)
	{
		free(new_nd);
		return (0);
	}
	new_nd->value = val_dupl;
	new_nd->next = ht->array[slot];
	ht->array[slot] = new_nd;

	return (1);
}
