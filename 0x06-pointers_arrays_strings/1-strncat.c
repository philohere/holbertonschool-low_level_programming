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
 * _strncat - concatenates two strings with max of n bytes
 * @dest: copying to this pointer
 * @src: input string
 * @n: amount of bytes
 * Return: concatenated strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int srclen = _strlen(src);
	int destlen = _strlen(dest);

	for (i = 0; i <= srclen && i < n; i++)
		dest[destlen + i] = src[i];

	return (dest);
}
