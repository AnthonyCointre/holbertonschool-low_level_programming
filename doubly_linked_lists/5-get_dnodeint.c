#include "lists.h"

/**
* get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
* @head: A pointer to the head of the list.
* @index: The index of the node to retrieve.
*
* Return: If the node at the index is found - the address of the node,
*         otherwise - NULL.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}

		i++;
		head = head->next;
	}

	return (NULL);
}
