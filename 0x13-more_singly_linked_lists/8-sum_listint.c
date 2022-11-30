#include "lists.h"

/**
  * sum_listint- Function that adds the integers in a list
  * @head: Pointers pointing to the first node
  * Return: sum
  */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
