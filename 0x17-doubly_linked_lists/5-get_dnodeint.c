#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth
 * node of a dlistint_t linked list.
 * @head: head pointer pointing to head node
 * @index: is the index of the node, starting from 0
 * Return: return NULL, if the node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}

	if (current == NULL)
	{
		return (NULL);
	}
	else
	{
		return (current);
	}
}
