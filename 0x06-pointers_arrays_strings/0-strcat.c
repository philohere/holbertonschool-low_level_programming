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
 * _strcat - cocatenates two strings
 * @dest: string to be appended
 * @src: input string
 * Return: concatenated strings
 */

char *_strcat(char *dest, char *src)
{
	int i;

	int destlen = _strlen(dest);
	int srclen = _strlen(src);

	for (i = 0; i < srclen; i++)
		dest[destlen + i] = src[i];

	return (dest);
}
