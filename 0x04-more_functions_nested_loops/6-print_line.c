#include "holberton.h"

/**
 * print_line - Draw a straight line
 *
 * @n: this is the number of times to print _ character
 */

void print_line(int n)
{

	if (n > 0)
	{
		while (--n)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
