#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - counts the number of characters in a string
 * @s: This is a pointer to a string
 * Return: length of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * print_buffer - print the size of the buffer
 * @b: the buffer
 * @int_size: size of buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i;
	int count = _strlen(src);

	for (i = 0; i <= count; i++)
		dest[i] = src[i];

	return (dest);
}
