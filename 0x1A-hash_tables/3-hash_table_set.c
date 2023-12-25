#include "hash_table.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: hash table to add or update the key
 * @key: key to add
 * @value: value to store for key (it must be duplicated)
 * Return: 1 if success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newpair, *tmp;
	unsigned long int idx;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);
	tmp = ht->array[idx];

	if (tmp != NULL)
	{
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				tmp->value = strdup(value);
				return (1);
			}
		}
	}
	newpair->key = strdup(key);
	newpair->value = strdup(value);
	newpair->next = NULL;

	if (ht->array[idx] != NULL)
		newpair->next = ht->array[idx];

	ht->array[idx] = newpair;

	return (1);
}
