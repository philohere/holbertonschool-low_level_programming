#include "holberton.h"

/**
 * _isalpha - Checks for alphabetic characters
 *
 * @c: - is a variable used to check if a character is alphabetic character
 *
 * Return: 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
