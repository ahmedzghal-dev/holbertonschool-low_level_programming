#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *@ht: hash table.
 *@key:key.
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
		return (NULL);

	tmp = ht->array[key_index((const unsigned char *)key, ht->size)];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);

		tmp = tmp->next;
	}

	return (NULL);
}
