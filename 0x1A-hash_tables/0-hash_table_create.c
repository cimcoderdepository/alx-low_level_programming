#include "hash_tables.h"

/**
* hash_table_create - a function that creates a hash table.
*
* @size: size is the size of the array
*
* Return: a pointer to the newly created hash table. If something went wrong,
* your function should return NULL.
*
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *ht = NULL;

	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t **) * size);
	if (ht->array == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		ht->array[i] = NULL;
		i++;
	}
	return (ht);
}
