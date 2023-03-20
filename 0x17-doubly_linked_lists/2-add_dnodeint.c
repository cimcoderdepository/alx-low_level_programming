#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - a function that adds a new node at
 * the beginning of a dlistint_t list.
 * @head: head pointer to the head node
 * @n: data or value to populate a node
 * Return: new_code
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

    /* Allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

    /* Set the value of the new node */
	new_node->n = n;

    /* Set the next pointer of the new node */
	new_node->next = *head;

    /* Set the previous pointer of the new node */
	new_node->prev = NULL;

    /* Set the previous pointer of the old head, if it exists */
	if (*head != NULL)
		(*head)->prev = new_node;

    /* Set the head to point to the new node */
	*head = new_node;

	return (new_node);
}
