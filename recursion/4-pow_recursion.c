#include "main.h"

/**
 * _pow_recursion - check the code
 * @x: first member
 * @y: second member
 * Description: returns the power of a number elevated to an another number
 * Return: check the code
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		if (y == 0)
		{
			return (1);
		}
		else
		{
			return (x * _pow_recursion(x, y - 1));
		}
	}
}
