#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from `n` to `98`,
 * followed by a new line
 * @n: Starting number to print til 98
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%i", n);
			if (n < 98)
			{
				printf(", ");
			}

			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%i", n);
			if (n > 98)
			{
				printf(", ");
			}

			n--;
		}
	}
	printf("\n");
}
