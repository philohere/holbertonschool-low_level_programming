#include "holberton.h"

/**
 * main- void
 *
 * Description: Display the alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
