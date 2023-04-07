#include <stdio.h>
#include <stdlib.h>
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
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t) * size);
	if (!table)
		return (NULL);
	else
		return (table);
}
