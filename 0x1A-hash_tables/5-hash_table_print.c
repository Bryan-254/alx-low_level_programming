#include "hash_tables.h"

/**
 * hash_table_print - This function prints a hash table.
 * @ht: This parameter is a pointer to the hash table to print.
 * Return: Void
 * Description: Key/value are printed in the order they
 *              appear in the array of the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node;
	unsigned long int x;
	unsigned char print_comma = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (x = 0 ; x < ht->size ; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (print_comma == 1)
			{
				printf(", ");
			}

			current_node = ht->array[x];
			while (current_node != NULL)
			{
				printf("'%s': '%s'", current_node->key, current_node->value);
				current_node = current_node->next;
				if (current_node != NULL)
				{
					printf(", ");
				}
			}
			print_comma = 1;
		}
	}
	printf("}\n");
}
