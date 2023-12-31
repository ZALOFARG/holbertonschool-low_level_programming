#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Function that prints a name that receives as parameter
 * @name: name to print
 * @f: function pointer as parameter
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
