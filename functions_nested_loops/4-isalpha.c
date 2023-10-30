#include "main.h"

/**
 * _isalpha - returns if its lowercase or uppercase
 * @c: integer to be evaluated
 *
 * Desciption: evaluates if an integer is a letter, lowercase or uppercase
 *
 * Return: (1) if does; (0) if doesnt
 */
int _isalpha(int c)
{
	if (((c >= 65) && (c < 91)) || ((c >= 97) && (c < 123)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
