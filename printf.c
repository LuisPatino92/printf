#include "holberton.h"

/**
 * _printf - formats and prints data.
 *@format: message.
 * Return: the lenght of characters.
 */

int _printf(const char *format, ...)
{
	int *index, ltotal = 0, i, index_size, *sizeofindex = &index_size;
	int *len = &ltotal;
	va_list argument;

	if (format == NULL || (*(format) == '%' && *(format + 1) == '\0'))
		return (0);

	va_start(argument, format);

	index = indexer(sizeofindex, format);

	write(1, format, length(format));
	ltotal += length(format);

	for (i = 0; i < index_size; i++)
	{
		assigner(argument, *(format + index[i] - 1), len);
		write(1, format + index[i], length(format + index[i]));
		ltotal += length(format + index[i]);
	}

	va_end(argument);
	free(index);
	return (ltotal);

}
