#include "holberton.h"

/**
 * print_x - Prints in hex
 *
 * @argument: The Valist in its actual state
 * @len: A pointer to the length counter
 */

void print_x(va_list argument, int *len)
{
	long aux;
	int *hex, j, i, exp;
	char *string;

	aux = va_arg(argument, long);

	for (i = 0; aux / (pot(16, i)) >= 1; i++)
		;

	if (aux == 0)
		i = 1;
	else if (aux < 0)
		return;

	hex = malloc(sizeof(int) * i);
	if (hex == NULL)
		exit(1);

	exp = i - 1;

	for (i = 1, j = 0; exp >= 0; exp--, i = i * 16, j++)
	{
		*(hex + j) = (aux / i) % 16;
	}

	reverse_array(hex, j);
	string = hex_maker(hex, j);
	write(1, string, length(string));
	*len = *len + length(string);
	free(string);
	free(hex);
}

/**
 * print_X - Prints in HEX
 *
 * @argument: The Valist in its actual state
 * @len: A pointer to the length counter
 */

void print_X(va_list argument, int *len)
{
	long aux;
	int *hex, j, i, exp;
	char *string;

	aux = va_arg(argument, long);

	for (i = 0; aux / (pot(16, i)) >= 1; i++)
		;

	if (aux == 0)
		i = 1;
	else if (aux < 0)
		return;

	hex = malloc(sizeof(int) * i);
	if (hex == NULL)
		exit(1);

	exp = i - 1;

	for (i = 1, j = 0; exp >= 0; exp--, i = i * 16, j++)
	{
		*(hex + j) = (aux / i) % 16;
	}

	reverse_array(hex, j);
	string = hex_maker(hex, j);
	upper(string);
	write(1, string, length(string));
	*len = *len + length(string);
	free(string);
	free(hex);
}
