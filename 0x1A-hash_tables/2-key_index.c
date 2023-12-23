#include "hash_tables.h"

/**
 * key_index - prints the index of a key in hash table
 * @key:the key of the hash table
 * @size: size of the hash table
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int x, new_idx;

	if (size <= 0)
		return (0);

	x = hash_djb2(key);
	new_idx = x % size;

	return (new_idx);
}

