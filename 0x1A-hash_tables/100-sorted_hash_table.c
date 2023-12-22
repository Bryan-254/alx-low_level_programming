#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - This function creates a sorted hash table.
 * @size: This parameter is the size of new sorted hash table.
 * Return: A pointer to the new sorted hash table or NULL if error occurs.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int x;

	ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);

	if (ht->array == NULL)
	{
		return (NULL);
	}
	for (x = 0 ; x < size ; x++)
	{
		ht->array[x] = NULL;
	}
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - This function adds an element to a sorted hash table.
 * @ht: This parameter is a pointer to the sorted hash table.
 * @key: The key to add. Cannot be an empty string.
 * @value: This is the value associated with key.
 *
 * Return: Returns 0 upon failure, otherwise 1
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_nd, *tempo;
	char *val_copy;
	unsigned long int slot;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_copy = strdup(value);
	if (val_copy == NULL)
		return (0);

	slot = key_index((const unsigned char *)key, ht->size);
	tempo = ht->shead;
	while (tempo)
	{
		if (strcmp(tempo->key, key) == 0)
		{
			free(tempo->value);
			tempo->value = val_copy;
			return (1);
		}
		tempo = tempo->snext;
	}

	new_nd = malloc(sizeof(shash_node_t));
	if (new_nd == NULL)
	{
		free(val_copy);
		return (0);
	}
	new_nd->key = strdup(key);
	if (new_nd->key == NULL)
	{
		free(val_copy);
		free(new_nd);
		return (0);
	}
	new_nd->value = val_copy;
	new_nd->next = ht->array[slot];
	ht->array[slot] = new_nd;

	if (ht->shead == NULL)
	{
		new_nd->sprev = NULL;
		new_nd->snext = NULL;
		ht->shead = new_nd;
		ht->stail = new_nd;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_nd->sprev = NULL;
		new_nd->snext = ht->shead;
		ht->shead->sprev = new_nd;
		ht->shead = new_nd;
	}
	else
	{
		tempo = ht->shead;
		while (tempo->snext != NULL
				&& strcmp(tempo->snext->key, key) < 0)
			tempo = tempo->snext;
		new_nd->sprev = tempo;
		new_nd->snext = tempo->snext;
		if (tempo->snext == NULL)
			ht->stail = new_nd;
		else
			tempo->snext->sprev = new_nd;
		tempo->snext = new_nd;
	}

	return (1);
}

/**
 * shash_table_get - Retrieve the value associated with
 * a key in a sorted hash table.
 * @ht: This parameter is a pointer to the sorted hash table.
 * @key: This parameter is the key to get the value of.
 * Return: Returns the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current_node;
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

	current_node = ht->shead;

	while (current_node != NULL && strcmp(current_node->key, key) != 0)
	{
		current_node = current_node->snext;
	}

	return ((current_node == NULL) ? NULL : current_node->value);
}

/**
 * shash_table_print - This function prints a sorted hash table in order.
 * @ht: This parameter is a pointer to the sorted hash table.
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current_node;

	if (ht == NULL)
	{
		return;
	}

	current_node = ht->shead;
	printf("{");
	while (current_node != NULL)
	{
		printf("'%s': '%s'", current_node->key, current_node->value);
		current_node = current_node->snext;
		if (current_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Function prints sorted hash table in reverse order.
 * @ht: This parameter is a pointer to the sorted hash table to print.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current_node;

	if (ht == NULL)
	{
		return;
	}

	current_node = ht->stail;
	printf("{");

	while (current_node != NULL)
	{
		printf("'%s': '%s'", current_node->key, current_node->value);
		current_node = current_node->sprev;
		if (current_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - This function deletes a sorted hash table.
 * @ht: This parameter is a pointer to the sorted hash table.
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *current_node, *tempo;

	if (ht == NULL)
	{
		return;
	}

	current_node = ht->shead;

	while (current_node)
	{
		tempo = current_node->snext;
		free(current_node->key);
		free(current_node->value);
		free(current_node);
		current_node = tempo;
	}

	free(head->array);
	free(head);
}
