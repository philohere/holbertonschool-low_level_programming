#include "holberton.h"

/**
 * print_last_digit - int
 *
 * @r: Description: Print the last digit of a number
 *
 * Return: 0
 */

int print_last_digit(int r)
{
	int d;

	d = (r % 10);
	if (d < 0)
		d = d * -1;
	_putchar('0' + d);
	return (d);
}
