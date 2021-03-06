#include "holberton.h"

/**
 * int_to_string - Converts an integer to string
 *
 * @number: The integer to be converted
 *
 * Return: The pointer to the converted number
 */

char *int_to_string(int number)
{
	char *num_str;
	int len = 0, digits = 1, j;
	long i;

	for (i = 10; absolute(number) / i > 0; i = i * 10)
	{
		digits++;
	}

	if (number < 0)
		len = digits + 1;
	else
		len = digits;

	num_str = malloc(sizeof(char) * (len + 1));
	if (num_str == NULL)
		exit(0);

	i = 0;
	if (number < 0)
	{
		*(num_str) = '-';
		i++;
	}
	for (j = 1; i < len; i++, j++)
	{

		*(num_str + i) = ((absolute(number) / (pot(10, (digits - j)))) % 10) + 48;

	}
	*(num_str + i) = '\0';

	return (num_str);
}

/**
 * absolute - Absolute value
 *
 * @n: The number whose absolute value is needed
 *
 * Return: The absolute value
 */

long absolute(long n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}

/**
 * pot - potetiation of x ** y
 *
 * @x: The base
 * @y: The exponenr
 *
 * Return: The result of x ** y
 */

int pot(int x, int y)
{
	int i, resultado = 1;

	for (i = 0; i < y; i++)
	{
		resultado = resultado * x;
	}
	return (resultado);
}

/**
 * write_null - potetiation of x ** y
 *
 * Return: aux value
 */

char *write_null()
{
	char *aux = "(null)";

	return (aux);
}

/**
 * print_array_int - Print an array
 *
 * @array: Array to reverse
 * @size: Size of the array
 * @len: pointer to ltotal
 *
 * Return: aux value
 */

void print_array_int(int *array, int size, int *len)
{
	int i, aux;
	/*char aux;*/

	for (i = 0; i < size; i++)
	{
		aux = *(array + i) + 48;
		write(1, &aux, 1);
		*(len) = *(len) + 1;
	}
}
