#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints zero or positive or negative
 * srand: dunno
 * time: dunno
 * ranf: dunno
 *
 * Description: prints situation of the number bsaed on its nature
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
