#include "holberton.h"

/**
 * assigner - Assigns the function for each especifier
 *
 * @args: The va_arg list
 * @speci: the format specifier
 * @len: pointer to length value
 */

void assigner(va_list args, char speci, int *len)
{
	int i;
	char PO = '%';
	spec_assign asigner[] = {
	{"c", print_c},
	{"s", print_s},
	{"d", print_d},
	{"i", print_d},
	{"b", print_b},
	{NULL, NULL}
	};

	if (speci == '%')
	{
		write(1, &PO, 1);
		(*len)++;
		return;
	}
	for (i = 0; asigner[i].specifier; i++)
	{
		if (*(asigner[i].specifier) == speci)
		{
			asigner[i].solver(args, len);
		}
	}
}
