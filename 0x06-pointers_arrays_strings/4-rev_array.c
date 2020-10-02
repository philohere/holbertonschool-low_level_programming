#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverse the content of an array of integers
 * @a: a string
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int ninja;

	n = n - 1;

	for (ninja = 0; ninja < n; ninja++, n--)
	{
		int buff = a[ninja];

		a[ninja] = a[n];
		a[n] = buff;
	}
}
