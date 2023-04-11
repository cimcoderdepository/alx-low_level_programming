#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
* hash_table_set - a function that adds an element to the hash table.
*
* @ht: ht is the hash table you want to add or update the key/value to.
*
* @key: key is the key. key can not be an empty string.
*
* @value: value is the value associated with the key. value must be duplicated.
* value can be an empty string.
*
* Return: 1 if it succeeded, 0 otherwise.
*
* Description:
* In case of collision, add the new node at the beginning of the list.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *value_copy = NULL;
	/*unsigned long int size;*/

	/* if malloc fail to create ht. other word mean key dont exist */
	if (!ht || !key)
		return (0);	/* return 0 means malloc fail */

	/* Duplicate the value */
	value_copy = strdup(value);	/* strdup uses malloc fn to create duplicate */
	if (value_copy == NULL)	/* checking malloc fail to ctreate duplicate */
		return (0);	/* return 0 means malloc fail */

	/* get the index by importing index fn from header file */
	index = key_index((const unsigned char *)key, ht->size);

	/* if the key already exist */
	if (ht->array[index] && *(ht->array[index]->key) == *key)
	{
		free(ht->array[index]->value); /* free the already exist value in memory */
		ht->array[index]->value = value_copy; /* assign duplicate in same location */
		return (1);	/* return 1 if success. */
	}
	/* if the key not exist */
	else
	{
		ht->array = malloc(sizeof(hash_node_t) * ht->size);
		if (ht->array == NULL)
		return (0);

/**
* ht->array[index]->key = NULL;
*		ht->array[index]->value = NULL;
*		ht->array[index]->next = NULL;
*/		return (0);
	}
}
