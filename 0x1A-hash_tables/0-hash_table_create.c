#include "hash_tables.h"
/**
 * hash_table_create - create hash table
 * @size: size of the array
 *
 * Return: a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new;

	if (size == 0)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
	{
		free(new->array);
		return (NULL);
	}
	for (i = 0; i < new->size; i++)
	{
		new->array[i] = NULL;
	}

	return (new);
}
