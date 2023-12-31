#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by 'src'
 * @dest: copy string destination
 * @src: copy source
 * Return: pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_start);
}
