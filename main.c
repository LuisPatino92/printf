#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int len, len2;


	len = printf("mensaje de prueba  mensaje  ahsd\n");
	len2 = _printf("mensaje de prueba%cmensaje%cahsd\n");

	printf("original: %d pirata %d\n\n", len, len2);

	return (0);
}
