#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as parameter
 * on each element of an array
 * @array: Array as parameter
 * @size: Size of the array
 * @action: function to execute
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

