#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Prints a square, followed by a new line.
 * @n: times the character '\' should be printed
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
