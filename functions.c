#include "holberton.h"

/**
 * print_c - Prints a char
 *
 * @argument: The Valist in its actual state
 * @len: A pointer to the length counter
 */

void print_c(va_list argument, int *len)
{
	char aux;

	aux = va_arg(argument, int);

	write(1, &aux, 1);
	(*len)++;
}


/**
 * print_s - Prints a string
 *
 * @argument: The Valist in its actual state
 * @len: A pointer to the length counter
 */

void print_s(va_list argument, int *len)
{
	char *aux;

	aux = va_arg(argument, char *);
	if (aux == NULL)
	{
		aux = write_null();
	}
	write(1, aux, length(aux));
	*len = *len + length(aux);
}

/**
 * print_d - Prints a integer
 *
 * @argument: The Valist in its actual state
 * @len: A pointer to the length counter
 */

void print_d(va_list argument, int *len)
{
	int aux;
	char *Paux;

	aux = va_arg(argument, int);
	Paux = int_to_string(aux);
	write(1, Paux, length(Paux));
	*len = *len + length(Paux);
	free(Paux);
}

/**
 * print_b - Prints a binary from base 10
 *
 * @argument: The Valist in its actual state
 * @len: A pointer to the length counter
 */

void print_b(va_list argument, int *len)
{
	long aux;
	int *binary, j, i, exp;

	aux = va_arg(argument, long);

	for (i = 0; aux / (pot(2, i)) >= 1; i++)
		;
	if (aux == 0)
		i = 1;
	else if (aux < 0)
		return;

	binary = malloc(sizeof(int) * i);
	if (binary == NULL)
		exit(1);

	exp = i - 1;

	for (i = 1, j = 0; exp >= 0; exp--, i = i * 2, j++)
	{
		*(binary + j) = (aux / i) % 2;
	}

	reverse_array(binary, j);
	print_array_int(binary, j, len);
	free(binary);
}

/**
 * print_o - Prints a octal from base 10
 *
 * @argument: The Valist in its actual state
 * @len: A pointer to the length counter
 */

void print_o(va_list argument, int *len)
{
	long aux;
	int *octal, j, i, exp;

	aux = va_arg(argument, long);

	for (i = 0; aux / (pot(8, i)) >= 1; i++)
		;
	if (aux == 0)
		i = 1;
	else if (aux < 0)
		exit(1);

	octal = malloc(sizeof(int) * i);
	if (octal == NULL)
		exit(1);

	exp = i - 1;

	for (i = 1, j = 0; exp >= 0; exp--, i = i * 8, j++)
	{
		*(octal + j) = (aux / i) % 8;
	}

	reverse_array(octal, j);
	print_array_int(octal, j, len);
	free(octal);
}
