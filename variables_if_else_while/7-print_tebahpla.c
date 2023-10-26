#include <stdio.h>

/**
 * main-check the code
 *
 * Description: prints the entire alphabet backwards
 *
 * Return: (0) on success
 */
int main(void)
{
	int n;

	for (n = 122; n > 96; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
