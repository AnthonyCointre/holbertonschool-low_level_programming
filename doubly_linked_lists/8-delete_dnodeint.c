#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at index index of a
*                            dlistint_t linked list.
* @head: A pointer to a pointer to the head of the list.
* @index: The index of the node that should be deleted.
*
* Return: 1 if it succeeded, -1 if it failed.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}

		free(current);
		return (1);
	}

	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		return (-1);
	}

	temp = current;
	current->prev->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}

	free(temp);
	return (1);
}
