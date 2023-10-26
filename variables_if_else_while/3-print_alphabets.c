#include <stdio.h>

/**
 * main - prints two alphabets
 *
 * Description: prints one alphabet in lowercase and another in upper
 *
 * Return: (0) on success
 */
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		putchar(n);
	}
	for (n = 65; n < 91; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
