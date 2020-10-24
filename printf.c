#include "holberton.h"

/**
 * _printf - formats and prints data.
 *@format: message.
 * Return: the lenght of characters.
 */

int _printf(const char *format, ...)
{
	char l;
	va_list argumentos;
	va_start (argumentos, format);
	l = va_arg(argumentos, int);
	write(1, format, largo(format));
	write(1, &l, 1);
	va_end (argumentos);
	return (largo(format)+1);
}


