#include "holberton.h"

/**
 * _puts - prints the characters of a string
 * @str: string of characters
 * Return: void
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
