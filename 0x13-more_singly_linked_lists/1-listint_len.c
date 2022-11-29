#include "lists.h"

/**
  * listint_len - Prints the number of elements in a list
  * @h: head pointing to the first node
  * Return: Returns the number of nodes.
  */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
