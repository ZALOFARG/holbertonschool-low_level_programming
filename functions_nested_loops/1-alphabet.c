#include "main.h"

/**
 * print_alphabet - Print the alphabet, in lowercase, followed by a new line
 */

void print_alphabet(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
		_putchar(letra);
	}
	_putchar('\n');
}
