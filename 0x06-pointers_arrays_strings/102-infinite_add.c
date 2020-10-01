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
 * infinite_add - add two numbers
 * @n1: number 1
 * @n2: number 2
 * @r: buffer used to store the result
 * @size_r: the buffer size
 * Return: the sum of the two numbers
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int count = _strlen(src);

	for (i = 0; i <= count; i++)
		dest[i] = src[i];

	return (dest);
}
