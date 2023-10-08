#include "hash_tables.h"

/**
 * key_index - to returns the index of a key
 *
 * @key: key of value
 * @size: size of the array
 * Return: index of the key
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
