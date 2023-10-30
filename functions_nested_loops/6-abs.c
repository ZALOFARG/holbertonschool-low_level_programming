#include "main.h"

/**
 *_abs - check the code
 * @n: number to be evaluated
 *
 * Description: computes the abs value of an integer
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
