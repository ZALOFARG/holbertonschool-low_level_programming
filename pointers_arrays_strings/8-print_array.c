#include "main.h"

/**
 * print_array - prints the values
 * @a: array to be captures
 * @n: number of values to print
 *
 * Description: prints the values of an array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i, ", a[i]);
	}
	printf("\n");
}
