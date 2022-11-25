#include "lists.h"
#include <string.h>
/**
  * add_node_end - Adds new node at the end of thr list
  * @head: Head of the node
  * @str: string to be passed into the new node
  * Return: returns address of head
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t length;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	for (length = 0; str[length]; length++)
		;

	new->len = length;
	new->next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (*head);
}
