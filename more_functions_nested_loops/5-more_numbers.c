#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Prints numbers, from 0 to 14, followed by a new line.
 * Description: prints 10 times numbers from 0 to 14
 * Return: Nothing
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int num = 0;

		while (num <= 14)
		{
			if (num > 9)
			{
				_putchar('0' + (num / 10));
			}
			_putchar('0' + (num % 10));
			num++;
		}
		_putchar('\n');
		i++;
	}
}
