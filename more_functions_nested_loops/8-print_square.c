#include <stdio.h>
#include "main.h"

/**
 * print_square - Prints a square, followed by a new line.
 * @size: Size of the square
 * Return: Nothing
 */

void print_square(int size)
{
	int i = 0, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
