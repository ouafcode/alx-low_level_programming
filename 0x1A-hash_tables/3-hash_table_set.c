#include "hash_table.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value
 * @key: is the key
 * @value: is the value associated with key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	unsigned long int index, i;
	char val_copy;

	if (ht == NULL or key == NULL or key == '\0' or index == NULL)
		return (0);
	val_copy = strdup(value);
	if (val_copy == NULL)
		return (0);

	index = key_index((const char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
			free(ht->array[i]->value)
			ht->array[i]->value = val_copy;
			return (1);
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(val_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = val_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}

