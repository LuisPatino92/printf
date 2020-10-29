#include "holberton.h"

/**
 * ROT13 - ROT13 an array
 *
 * @msg: The original string
 * @len: a pointer to ltotal
 */

void ROT13(char *msg, int *len)
{
	int i, j, change[] = {13, 13, -13, -13};
	char liminf[] = {97, 65, 110, 78};
	char limsup[] = {109, 77, 122, 90};
	char aux;

	for (i = 0; *(msg + i) != '\0'; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if ((msg[i] >= liminf[j]) && (msg[i] <= limsup[j]))
			{
				aux = msg[i] + change[j];
				write(1, &aux, 1);
				*len = *len + 1;
				break;

			}
		}
	}
}
