#include "main.h"
#include <string.h>
/**
 * _realloc - reallocates memory space from a given block
 * @ptr: pointer of old space
 * @old_size: old size of space
 * @new_size: new size of space
 * Return: pointer to newly allocated space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (old_size == new_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	if (old_size < new_size)
	{
		min_size = old_size;
	}
	else
		min_size = new_size;

	memcpy(new_ptr, ptr, min_size);
	free(ptr);
	return (new_ptr);
}
