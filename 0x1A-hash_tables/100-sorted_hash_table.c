#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted out hash table
 * @size: size of the hash table
 * Return: a hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;

	new_table = malloc(sizeof(shash_table_t));

	if (!new_table)
		return (NULL);
	
	new_table->array = calloc(size, sizeof(shash_table_t));
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}
