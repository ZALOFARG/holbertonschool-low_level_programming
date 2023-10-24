#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer that reference the string to be printed
 * Description: prints a strings referenced on anotther function
 * Return: nothing on sucess
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
