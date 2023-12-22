#include "hash_tables.h"

/**
 * hash_table_delete - This function deletes a hash table.
 * @ht: This parameter is a pointer to a hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *current_node, *tempo;
	unsigned long int x;

	if (ht == NULL)
	{
		return;
	}

	for (x = 0 ; x < ht->size ; x++)
	{
		if (ht->array[x] != NULL)
		{
			current_node = ht->array[x];
			while (current_node != NULL)
			{
				tempo = current_node->next;
				free(current_node->key);
				free(current_node->value);
				free(current_node);
				current_node = tempo;
			}
		}
	}
	free(head->array);
	free(head);
}
