#include "hash_tables.h"

/**
 * hash_table_set - adds an element on the hash table.
 * @ht: hash table.
 * @key: key.
 * @value: the value associated with the key.
 *
 * Return: retrun 1 if success, if not return 0.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *list = NULL;
	unsigned long int idx = 0;

	if (!ht || !key || !value)
	{
		return (0);
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		return (0);
	}

	idx = key_index((const unsigned char *)key, ht->size);
	list = ht->array[idx];

	while (list)
	{
		if (strcmp(list->key, key) == 0)
		{
			free(list->value);
			list->value = strdup(value);
			return (1);
		}
		list = list->next;
	}

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
