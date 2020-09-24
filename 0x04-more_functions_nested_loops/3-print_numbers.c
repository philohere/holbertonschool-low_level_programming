#include "holberton.h"

/**
* print_numbers
*
* Description: Print numbers 0-9 only using putchar twice
*
* Void
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
