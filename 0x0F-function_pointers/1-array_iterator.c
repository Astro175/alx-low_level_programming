#include "function_pointers.h"

/**
  *array_iterator - Entry
  *@array: rr
  *@size: size
  *@action: act
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
