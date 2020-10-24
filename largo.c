#include "holberton.h"

/**
 * largo - Compute the length of a string
 *
 * @string - The string to be measured
 *
 * Return: The length of the string
 */

int largo(const char *string)
{
	int i;

	for (i = 0; *(string + i) && *(string + i) != '%' ; i++)
		;

	return (i);
}
