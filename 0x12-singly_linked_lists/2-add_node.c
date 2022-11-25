#include "lists.h"
#include <string.h>
/**
  * add_node - adds new node
  * @head: head node
  * @str: string to be added
  * Return: address of head
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t length;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	for (length = 0; str[length]; length++)
		;
	new->len = length;
	new->next = *head;
	*head = new;
	return (*head);
}
