#include "search_algos.h"

/**
  * linear_search - Function that uses linear_search algorithm on an array
  * @array: Array to search from
  * @size: size of the array
  * @value: integer to search for in array
  * Return: Index where value was found
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			printf("Found %d at index: %li\n", value, i);
			return (i);
		}
	}
	return (-1);
}
