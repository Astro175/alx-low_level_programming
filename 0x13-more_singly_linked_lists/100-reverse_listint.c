#include "lists.h"

/**
  * print_listint_safe- Prints a linked list
  * @head: Pointer pointing to the first node
  * Return: size
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *n;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}
	*head = p;
	return (*head);
}
