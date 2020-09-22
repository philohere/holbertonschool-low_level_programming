#include "holberton.h"

/**
 * _abs - Prints the absolute value
 *
 * @r: - is a variable from another function
 *
 * Return: 0
 */

int _abs(int r)
{
	if (r < 0)
		r = r * -1;
	return (r);
}
