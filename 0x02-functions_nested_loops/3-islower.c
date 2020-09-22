#include "holberton.h"

/**
 * _islower - Checks for lowercase character
 *
 * @c: - is a variable used to check is a character is lowercase
 *
 * Return:y 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
