#include "holberton.h"

/**
 * print_diagonal - Print diagonal
 *
 *@n: Input from print_diagonal
 *
 * Return: int
 */

void print_diagonal(int n)
{

	int row;
	int space;

	for (row = 0; row < n; row++)
	{
		for (space = 0; space < row; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
