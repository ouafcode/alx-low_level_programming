#include "hash_tables.h"

/**
 * hash_table_get - to retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: key your are looking for
 * Return: value associated with the element or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
