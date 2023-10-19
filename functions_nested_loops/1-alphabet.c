#include "main.h"

/**
 * void - check the code
 *
 * Description: print_alphabet prints de alphabet from a til z
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
