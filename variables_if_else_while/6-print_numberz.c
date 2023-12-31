#include <stdio.h>

/**
 * main - Prints all single digit numbers of base `10` from `0`
 * Return: 0;
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
	return (0);
}
