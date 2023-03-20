#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - a function that adds a new node
 * at the end of a dlistint_t list.
 * @head: head pointer pointing to the head node
 * @n: data or value to be filled in each node
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

    /* Allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

    /* Set the value of the new node */
	new_node->n = n;

    /* Set the next pointer of the new node to NULL */
	new_node->next = NULL;

    /* Handle the case of an empty list */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

    /* Traverse the list to the end */
	current = *head;
	while (current->next != NULL)
		current = current->next;

    /* Set the next pointer of the previous last node to the new node */
	current->next = new_node;

    /* Set the previous pointer of the new node to the previous last node */
	new_node->prev = current;

	return (new_node);
}
