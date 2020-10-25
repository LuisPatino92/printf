#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int len, len2;


	len = printf("mensaje%%mensaje%%mensaje");
	printf("\n");
	len2 = _printf("men%csaje%cmensaje%cmensaje");

	printf("\noriginal: %d pirata %d\n\n", len, len2);

	return (0);
}
