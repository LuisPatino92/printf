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

	for (i = 0; i < (n / 2); i++)
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
