#include "holberton.h"

/**
 * print_rev - prints the characters of a string in reverse
 * @s: pointer to a string
 * Return: void
 */

void print_rev(char *s)
{
	int count;

	count = 0;

	while (s[count] != '\0')
		count++;

	for (count--; count >= 0; count--)
		_putchar(s[count]);

	_putchar('\n');
}
