#include "main.h"

/**
 * _puts - prints a string backwards
 * @str: pointer that reference the string to be printed
 * Description: prints a string backwards referenced on anotther function
 * Return: nothing on sucess
 */
void print_rev(char *str)
{
	int i;

	for (str[i] = '\0'; i = 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
