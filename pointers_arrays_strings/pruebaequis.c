#include <stdio.h>

int main(void)
{
	char *str;
	int len, i;
	int contador = 1;

	str = "holamundo";
	printf("%s\n", str);
	
	for (i = 0; str[i] != '\0'; i++)
	{
		contador++;
	}
	printf("El numero de caracteres es: %d\n", contador);
	printf("valor del pointer es: %x\n", *str);
	
	return (0);
}
