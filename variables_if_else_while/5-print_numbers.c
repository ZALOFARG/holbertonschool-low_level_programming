#include <stdio.h>

/**
 * main - prints numbers
 *
 * Description: prints numbers from 0 til 9
 *
 * Return: (0) on success
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
