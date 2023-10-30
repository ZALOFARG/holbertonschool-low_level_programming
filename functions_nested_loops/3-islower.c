#include "main.h"

/**
 * _islower - returns if its lowercase
 * @c: integer to be evaluated
 *
 * Desciption: evaluates if an integer belongs to the range on lowercase
 *
 * Return: (1) if does; (0) if doesnt
 */
int _islower(int c)
{
	if ((c >= 97) && (c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
