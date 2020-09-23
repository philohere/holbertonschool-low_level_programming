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

	if (r < 0)
		r = r * -1;
	_putchar((r % 10) + '0');
	return (r % 10);
}