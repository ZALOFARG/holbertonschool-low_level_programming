#include <stdio.h>

/**
 * main-check the code
 *
 * Description: prints the entire alphabet from a til z except e y q
 *
 * Return: (0) on success
 */
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if ((n == 101) || (n == 113))
		{
			continue;
		}
		putchar(n);
	}
	putchar('\n');
	return (0);
}
