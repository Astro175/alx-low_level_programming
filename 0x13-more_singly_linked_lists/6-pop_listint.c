#include "lists.h"

/**
  * pop_listint- Deletes the first node
  * @head: Pointer pointing to the first node
  * Return: Data of the first node
  */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *ptr2;
	int n;

	if (head == NULL)
		return (0);

	ptr2 = *head;

	n = ptr2->n;

	temp = ptr2->next;

	free(ptr2);

	*head = temp;

	return (n);
}
