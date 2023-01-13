#include "lists.h"

/**
 * dlistint_len - Returns number of nodes
 * @h: head node
 * Return: number of node
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
