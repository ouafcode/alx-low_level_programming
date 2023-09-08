#include "hash_tables.h"

/**
 *  key_index - function that return the index of a key
 *
 * @key: is the key
 * @size: size of the array of the hash table
 * Return: the index at the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
