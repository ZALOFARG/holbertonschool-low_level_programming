#include "main.h"

void _puts_recursion(char *s, int i)
{
	if(s[i] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[i]);
		_puts_recursion(s, i + 1);
	}
}
