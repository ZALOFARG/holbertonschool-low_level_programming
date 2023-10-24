#include "main.h"

/**
 * _strlen - returns the lenght of a string s
 *
 * Description: receives a pointer
 * *s: declares and receives the argument of another function
 *
 * Return: always 0
 */
int _strlen(char *s)
{
	int i;
	int contador = 0;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		contador++;
	}
	return (contador);
}
