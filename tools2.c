#include "holberton.h"

/**
 * reverse_array - reverses an array of integers
 *
 * @a: The array of int to be reversed
 * @n: The length of the array
 *
 */

void reverse_array(int *a, int n)
{
	int aux, i;

	n = n - 1;

	for (i = 0; i <= (n / 2); i++)
	{
		aux = a[i];
		a[i] = a[n - i];
		a[n - i] = aux;
	}

}

/**
 * rev_string - reverse a String in its address memory
 *
 * @s: The string to be reversed
 *
 */

void rev_string(char *s)
{
	int i, lenght;
	char auxString[1000];

	i = 0;

	while (s[i] != 0)
	{
		auxString[i] = s[i];
		i++;
	}

	lenght = i - 1;

	for (i = 0; i <= lenght; i++)
		*(s + i) = auxString[lenght - i];

}


/**
 * _strcmp - compares digit by digit of two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: The ASCII substract of the different firs digit found
 */

int _strcmp(char *s1, char *s2)
{
	int i, n = 0;

	for (i = 0; s1[i] != 0; i++)
	{
		if (s1[i] != s2[i])
		{
			n = s1[i] - s2[i];
			return (n);
		}
	}

	return (n);
}

/**
 * hex_maker - converts an array of ints to hex
 *
 * @hex: The int array
 * @j: The size of the array
 *
 * Return: The ASCII substract of the different firs digit found
 */

char *hex_maker(int *hex, int j)
{
	int i;
	char *hex_char;

	hex_char = malloc((j + 1) * sizeof(char));
	if (hex_char == NULL)
		exit(1);

	for (i = 0; i < j; i++)
	{

		if (*(hex + i) >= 0 && *(hex + i) <= 9)
			*(hex_char + i) = *(hex + i) + 48;
		else if (*(hex + i) == 10)
			*(hex_char + i) = 'a';
		else if (*(hex + i) == 11)
			*(hex_char + i) = 'b';
		else if (*(hex + i) == 12)
			*(hex_char + i) = 'c';
		else if (*(hex + i) == 13)
			*(hex_char + i) = 'd';
		else if (*(hex + i) == 14)
			*(hex_char + i) = 'e';
		else if (*(hex + i) == 15)
			*(hex_char + i) = 'f';

	}
	*(hex_char + i) = '\0';
	return (hex_char);
}

/**
 * upper - capitalizes an array
 *
 * @string: The hex string
 */

void upper(char *string)
{
	int i;

	for (i = 0; *(string + i); i++)
	{
		if (*(string + i) >= 97 && *(string + i) <= 102)
			*(string + i) = *(string + i) - 32;
	}

}
