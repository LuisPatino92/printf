#include "holberton.h"

/**
 * largo - Compute the length of a string
 *
 * @string: The string to be measured
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

/**
 * import_index - Bring the index with %
 *
 * @format: The string
 *
 * Return: The index of %'s
 */

int *import_index(const char *format, ...)
{
	int *array_index, i, count = 0;

	for (i = 0; *(format + i); i++)
	{
		if (*(format + i) == '%')
			count++;
	}

	array_index = malloc(count * sizeof(int));
	if (array_index == NULL)
		return (NULL);

	count = 0;
	for (i = 0; *(format + i); i++)
	{
		if (*(format + i) == '%')
		{
			array_index[count] = i + 2;
			count++;
		}
	}

	return (array_index);
}
