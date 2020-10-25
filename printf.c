#include "holberton.h"

/**
 * _printf - formats and prints data.
 *@format: message.
 * Return: the lenght of characters.
 */

int _printf(const char *format, ...)
{
	int *indices, i;

	indices = import_index(format);

	write(1, format, largo(format));

	for (i = 0; i < sizeof(indices)/sizeof(int); i++)
	{
		write(1, format + indices[i], largo(format + indices[i]));

	}

	free(indices);
	return (largo(format) + 1);
}


