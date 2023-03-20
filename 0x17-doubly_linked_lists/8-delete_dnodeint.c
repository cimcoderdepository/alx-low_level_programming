#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t
 *                            linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to delete. Index starts at 0.
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *tmp;
	unsigned int i;

	if (*head == NULL)  /* Empty list */
		return (-1);

	if (index == 0)		/* Delete first node */
	{
		tmp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	current = *head;
	/* Traverse the list to the previous node */
	for (i = 0; i < index - 1 && current != NULL; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)  /* Index out of bounds */
		return (-1);

	tmp = current->next;  /* Delete the node */
	current->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = current;
	free(tmp);
	return (1);
}
