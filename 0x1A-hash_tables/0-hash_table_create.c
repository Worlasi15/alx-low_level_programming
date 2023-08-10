#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the hash table
 *
 * Return: a pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hastab;

	if (size == 0)
		return (NULL);

	hastab = calloc(1, sizeof(hash_table_t));
	if (hastab == NULL)
		return (NULL);

	hastab->size = size;
	hastab->array = calloc(size, sizeof(hash_node_t *));
	if (hastab->array == NULL)
	{
		free(hastab);
		return (NULL);
	}
	return (hastab);
}
