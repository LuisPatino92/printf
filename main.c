#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int len, len2;
	char texto = '+';


	len = printf("mensaje de prueba %c\n", texto);
	len2 = _printf("mensaje de prueba %c", texto);

	printf("original: %d pirata %d\n\n", len, len2);

	return (0);
}
