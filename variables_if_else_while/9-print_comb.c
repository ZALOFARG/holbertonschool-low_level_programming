#include <stdio.h>

/**
 * main - check the code
 *
 * Description: prints from 0 til 9 using char
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n == 57)
		{
			putchar(n);
		}
		else
		{
			putchar(n);
			putchar(44);
		}
	}
	putchar('\n');
	return (0);
}
