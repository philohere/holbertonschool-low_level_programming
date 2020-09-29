#include "holberton.h"

/**
 * puts2 - prints every other characters of a string
 * @str: string of characters
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;

		if (i % 2 == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
