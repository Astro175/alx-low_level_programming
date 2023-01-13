#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the node at index
 * @head: head node
 * @index: index to get to
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}

	return (NULL);
}
