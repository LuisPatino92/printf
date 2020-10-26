#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int len, len2;


	len = printf("Char %c, String %s, %%: %% %d %i\n", 'P', "PERRO", 0, -10298);
	len2 = _printf("Char %c, String %s, %%: %% %d %i\n", 'P', "PERRO", 0, -10298);

	printf("\noriginal: %d pirata %d\n\n", len, len2);

	return (0);
}
