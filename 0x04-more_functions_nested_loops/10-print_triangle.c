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
		_putchar('#');
	_putchar('\n');
	}
}
