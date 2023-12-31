#include <stdio.h>

/**
 * int_index - Searches for an integer.
 * @array: Array of integers
 * @size: Number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: Index of the first element for which the `cmp`
 * function does not return `0`
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

