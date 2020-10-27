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
	int *binary, j, i, exp, s;

	aux = va_arg(argument, long);

	for (i = 0; aux / (pot(2, i)) >= 1; i++)
		;

	binary = malloc(sizeof(int) * i);
	if (binary == NULL)
		return;

	s = i;
	exp = i - 1;

	for (i = 1, j = 0; exp >= 0; exp--, i = i * 2, j++)
	{
		*(binary + j) = (aux / i) % 2;
	}
	printf("exp vale %d", s);

	reverse_array(binary, s);
	print_array_int(binary, s, len);
}
