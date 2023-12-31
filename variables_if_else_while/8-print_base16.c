#include <stdio.h>

/**
 * main - Prints all the numbers of base `16`
 * Return: 0
 */

int main(void)
{
	int i;
	char hexChar;

	for (i = 0; i < 16; i++)
	{
		hexChar = (i < 10) ? '0' + i : 'a' + (i - 10);
		putchar(hexChar);
	}

	putchar('\n');
	return (0);
}
