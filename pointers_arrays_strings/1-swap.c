#include "main.h"

/**
 * Void - check the code
 *
 * Description: 
 *
 * Return 0 because void
 */
void swap_int(int *a, int *b)
{
	int c = 10;
	int *pc;

	pc = &c;
	*pc = *a;
	*a = *b;
	*b = *pc;

}
