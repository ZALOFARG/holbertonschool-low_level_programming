#include "main.h"

/**
 * void
 *
 * no return
 *
 * Description: puts the alphabet from a til z
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
