#include "main.h"

/**
 * _strlen_recursion - check the code
 * @s: string to be evaluated
 *
 * Description: counts the number of word of a sentence
 *
 * Return: check the code
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
