#include "holberton.h"

/**
 * indexer - Bring the index with %
 *
 * @sizeofindex: Pointer to length
 * @format: The string
 *
 * Return: The index of %'s
 */

int *indexer(int *sizeofindex, const char *format, ...)
{
	int *array_index, i, count = 0;

	for (i = 0; *(format + i); i++)
	{
		if (*(format + i) == '%')
		{
			count++;
			if (*(format + i + 1) == '%')
				i++;
		}
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
			if (*(format + i + 1) == '%')
				i++;
		}
	}
	*sizeofindex = count;
	return (array_index);
}
