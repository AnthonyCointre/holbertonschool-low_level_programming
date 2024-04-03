#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
* @head: A pointer to the address of the head of the list.
* @n: The data to be added to the new node.
*
* Return: The address of the new node, or NULL if it failed.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last;

	if (new_node == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	last = *head;

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_node;
	new_node->prev = last;

	return (new_node);
}
