#include "hash_tables.h"

/**
 * hash_table_print - Prints the elements in a table
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long i;
	hash_node_t *temp;
	int elements_printed = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];

		while (temp)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			elements_printed++;
			if (temp || elements_printed < ht->size)
			{
				printf(", ");
			}
			temp = temp->next;
		}
	}
	printf("}\n");
}
