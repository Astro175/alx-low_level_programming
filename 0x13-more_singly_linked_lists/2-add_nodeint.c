#include "lists.h"

/**
  * add_nodeint_end - Adds a node at end of a list
  * @head: Pointer that points to the first node
  * @n: integer
  * Return: pointer to the new node
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);

}
