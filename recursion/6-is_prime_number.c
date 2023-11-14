#include "main.h"

/**
 * is_prime_recursive - check the code
 * @n: number to be entered
 * @divisor: divisor of the number
 *
 * Description: checks if a number is prime or not
 *
 * Return: 1 if it's prime, 0 if it's not
 */
int is_prime_recursive(int n, int divisor)
{
	if (n < 2)
	{
		return (0);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_recursive(n, divisor + 1));
	}
}
/**
 * is_prime_number - check the code
 * @n: number to be evaluated
 *
 * Description: determines if a number is prime or not
 *
 * Return: (1) if affirmative (0) if negative
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}
