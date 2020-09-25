#include "holberton.h"

/**
 * print_square - print a square
 * @size: pull size
 * void
 */

void print_square(int size)
{

	int row;
	int col;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
			_putchar('#');

		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
