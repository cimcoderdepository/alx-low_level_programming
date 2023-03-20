#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *temp;

    /* Traverse the list and free each node */
	current = head;
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
