#include "holberton.h"

/**
 * print_alphabet_x10 - void
 *
 * Description: Display the alphabet
 *
 * No Return
 */

void print_alphabet_x10(void)
{
	int y;
	int x;

	for (y = 0; y < 10; y++)
	{
	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
	}
}
