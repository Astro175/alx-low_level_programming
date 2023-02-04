#include "hash_tables.h"

/**
 * hash_table_print - Prints the elements in a table
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	unsigned long int elements_printed = 0;
	int comma = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];

		while (temp)
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			elements_printed++;
			if (temp->next)
			{
				comma = 1;
			}
			temp = temp->next;
		}
	}
	if (!elements_printed)
		printf("}\n");
	else
		printf("}\n");
}
