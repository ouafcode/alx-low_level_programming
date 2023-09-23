#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: is the key
 *
 * Return: value associated with the key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	if (ht == NULL || key == NULL)
		return (NULL);
	if (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
		{
			return (head->value);
		}
		head = head->next;
	}
	return (NULL);
}
