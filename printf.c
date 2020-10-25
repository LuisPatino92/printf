#include "holberton.h"

/**
 * _printf - formats and prints data.
 *@format: message.
 * Return: the lenght of characters.
 */

int _printf(const char *format, ...)
{
	int *indices, ltotal =0, i, *sizeofindex;

	indices = import_index(sizeofindex, format);

	write(1, format, largo(format));
	ltotal += largo(format);

	for (i = 0; i < *sizeofindex; i++)
	{
		write(1, format + indices[i], largo(format + indices[i]));
		ltotal += largo(format + indices[i]);
	}

	free(indices);
	
	return (ltotal);

}


