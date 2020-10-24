#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int len, len2;

	len = printf("mensaje de prueba");
	len2 = _printf("mensaje de prueba");

	printf("original: %d pirata %d", len, len2);

	return (0);
}
