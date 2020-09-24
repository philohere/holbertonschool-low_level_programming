#include "holberton.h"

/**
 * more_numbers -print a line of numbers 10 times
 *
 * void - no return
 */

void more_numbers(void)
{

	int line;
	int num;

	for (line = 0; line < 10; line++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			_putchar((num / 10) + '0');

		_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
