#include "holberton.h"

/**
 * length - Compute the length of a string
 *
 * @string: The string to be measured
 *
 * Return: The length of the string
 */

int length(const char *string)
{
	int i;

	for (i = 0; *(string + i) && *(string + i) != '%' ; i++)
		;

	return (i);
}
