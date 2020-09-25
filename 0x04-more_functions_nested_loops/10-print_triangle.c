#include "holberton.h"

/**
 * print_triangle - Print a triangle
 * @size: variable input
 * Return: void
 */

void print_triangle(int size)
{
	int row;
	int col;

	for (row = 0; row < size; row++)
	{
		for (col = size - 1; col > row; --col)
		{
			_putchar(' ');
		}
			for (col = 0; col <= row; col++)
				_putchar('#');

			_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
