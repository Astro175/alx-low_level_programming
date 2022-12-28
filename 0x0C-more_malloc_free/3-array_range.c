#include "main.h"

/**
 * array_range- array range of numbers
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int i, size;
	int *array;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
