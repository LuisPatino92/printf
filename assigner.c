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
	char PO = '%', found = 'Y';
	spec_assign asigner[] = {
	{"c", print_c},
	{"s", print_s},
	{"d", print_d},
	{"i", print_d},
	{"b", print_b},
	{"u", print_d},
	{"o", print_o},
	{"x", print_x},
	{"X", print_X},
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
			found = 'N';
			break;
		}
	}
	if (found == 'Y')
	{
		write(1, &PO, 1);
		write(1, &speci, 1);
		*len = *len + 2;
	}
}
