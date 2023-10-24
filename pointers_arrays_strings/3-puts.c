#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: pointer that reference the string to be printed
 * Description: prints a strings referenced on anotther function
 * Return: nothing on sucess
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
