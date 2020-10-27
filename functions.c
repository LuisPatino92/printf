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

