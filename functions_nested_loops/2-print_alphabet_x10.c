#include "main.h"

/**
 * print_alphabet_x10 - prints 10 rows de alphabet from a til z
 */

void print_alphabet_x10(void)
{
	char letra;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (letra = 'a'; letra <= 'z'; letra++)
		{
			_putchar(letra);
		}
		_putchar('\n');
	}
}
