#include "hash_tables.h"

/**
 * hash_table_set - Adds element to the hash table.
 * @ht: hash table to ad or update key
 * @key: key to add - cannot be an empty.
 * @value: value associated with key.
 *
 * Return: 1 if suceeded
 *         Otherwise - 0.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *vl_copy;
	unsigned long int j, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	vl_copy = strdup(value);
	if (vl_copy == NULL)
		return (0);

	j = key_index((const unsigned char *)key, ht->size);
	for (i = j; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = vl_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(vl_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = vl_copy;
	new->next = ht->array[j];
	ht->array[j] = new;

	return (1);
}
