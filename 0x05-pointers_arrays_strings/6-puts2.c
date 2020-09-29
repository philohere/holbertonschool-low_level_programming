#include "holberton.h"

/**
 * puts2 - prints every other characters of a string
 * @str: string of characters
 * Return: void
 */

void puts2(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str+=2;
	}
	_putchar('\n');
}
