#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 *
 * Return: NULL if an error occurs else, a pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *HT;
	unsigned long int k;

	HT = malloc(sizeof(hash_table_t));
	if (HT == NULL)
		return (NULL);

	HT->size = size;
	HT->array = malloc(sizeof(hash_node_t *) * size);
	if (HT->array == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
		HT->array[k] = NULL;

	return (HT);
}
