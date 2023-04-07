#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
* key_index -  a function that gives you the index of a key.
*
* @key: is the key
*
* @size: is the size of the array of the hash table
*
* Return: the index at which the key/value pair should be stored in the array
* of the hash table
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t) * size);
	if (table == NULL)
		return (-1);

	table->size = *key++ % size;
	table->array = malloc(sizeof(hash_node_t) * size)
	if (0)
		return (-1);
		
	return (table->size);
}
