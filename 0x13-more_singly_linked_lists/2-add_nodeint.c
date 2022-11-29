#include "lists.h"

/**
  * add_nodeint_end - Adds a node at end of a list
  * @head: Pointer that points to the first node
  * @n: integer
  * Return: pointer to the new node
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);

}
