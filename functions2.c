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

/**
 * print_R - Prints a string in ROT13
 *
 * @argument: The Valist in its actual state
 * @len: A pointer to the length counter
 */

void print_R(va_list argument, int *len)
{
	char *aux;

	aux = va_arg(argument, char *);

	if (aux == NULL)
		return;

	ROT13(aux, len);
}

/**
 * print_r - Prints a string reversed
 *
 * @argument: The Valist in its actual state
 * @len: A pointer to the length counter
 */

void print_r(va_list argument, int *len)
{
	char *aux;
	int i;

	aux = va_arg(argument, char *);

	for (i = length(aux) - 1; i >= 0; i--)
	{
		write(1, aux + i, 1);
		*len = *len + 1;
	}
}
