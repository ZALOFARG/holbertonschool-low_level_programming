#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - returns a string
 *
 * Description: returns a string based on the nature of a number
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 >= 6)
	{
		printf("Last digit of %d is %i and is greater than 5\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %i and is 0\n", n, n % 10);
	}
	else if ((n % 10 <= 5) && (n != 0))
	{
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
