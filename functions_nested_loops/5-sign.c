#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Number to be checked
 * Return:
 * 1 if @n is greater than zero
 * 0 if @n is zero
 * -1 if @n is less than zero
 */

int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		result = -1;
		_putchar('-');
	}
	else
	{
		result = 0;
		_putchar('0');
	}
	return (result);
}
