#include "main.h"

/**
 * factorial - check the code
 * @n: number to be evaluated
 *
 * Description: evaluated the factorial of a number
 *
 * Return: check the code
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
		{
			return (1);
		}
		else
		{
			return (n * factorial(n - 1));
		}
	}
}
