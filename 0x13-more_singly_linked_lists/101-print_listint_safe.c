#include "lists.h"

/**
  * reverse_listint - Reverses a linked list
  * @head: Pointer pointing to the first node
  * Return: A node
  */

listint_t *reverse_listint(listint_t **head)
{

		listint_t *prev = NULL;
		listint_t *next = NULL;

		while (*head)
		{
			next = (*head)->next;
			(*head)->next = prev;
			prev = *head;
			*head = next;
		}

		*head = prev;

		return (*head);
}
