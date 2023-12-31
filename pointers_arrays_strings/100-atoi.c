#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: string to be converted
 * Return: integers from the string
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ')
	{
		s++;
	}

	while (*s == '-' || *s == '+')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
		{
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}
