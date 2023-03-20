#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the linked list
 * @idx: index of the list where the new node should be added
 * @n: value to be stored in the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node;
	unsigned int i;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}

	current_node = *h;

	for (i = 0; i < idx - 1 && current_node; i++)
		current_node = current_node->next;

	if (!current_node)
		return (NULL);

	new_node->prev = current_node;
	new_node->next = current_node->next;
	if (current_node->next)
		current_node->next->prev = new_node;
	current_node->next = new_node;

	return (new_node);
}
