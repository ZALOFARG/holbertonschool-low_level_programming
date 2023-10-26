#include <stdio.h>

/**
 * main-check the code
 *
 * Description: prints the entire alphabet from a til z
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
	putchar('\n');
	return (0);
}
