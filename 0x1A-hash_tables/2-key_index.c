#include "hash_tables.h"

/**
 * key_index - to return the index of a key
 * @key: is the key
 * @size: the size of hash table
 *
 * Return: index at which the key/value pair should
 * be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;
	unsigned long int index;

	value = hash_djb2(key);
	index = value % size;
	return (index);
}
