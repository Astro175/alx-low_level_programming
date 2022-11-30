#include "lists.h"

/**
  * free_listint - Frees a lists
  * @head: Pointer pointing to the first node
  */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
