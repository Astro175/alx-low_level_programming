#include "lists.h"

/**
  * free_listint2 - Frees a list
  * @head: Pointer pointing to the first node
  */

void free_listint2(listint_t **head)
{
	listint_t *temp, *ptr;

	if (head != NULL)
	{
		ptr = *head;

		while ((temp = ptr) != NULL)
		{
			ptr = ptr->next;
			free(temp);
		}
		*head = NULL;
	}
}
