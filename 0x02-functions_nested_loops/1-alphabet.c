#include "holberton.h"

/**
 * print_alphabet - void
 *
 * Description: Display the alphabet
 *
 * No Return
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
