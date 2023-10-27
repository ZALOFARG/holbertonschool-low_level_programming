#include "main.h"

/**
 * print_rev - prints a string backwards
 * @str: pointer that reference the string to be printed
 * Description: prints a string backwards referenced on anotther function
 * Return: nothing on sucess
 */
void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
