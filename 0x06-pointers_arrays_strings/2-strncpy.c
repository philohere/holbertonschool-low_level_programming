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
                count++;                                             }
        return (count);
}

/**
 * _strncpy - copies a string
 * @dest: copying to this pointer
 * @src: input string
 * @n: number of bytes
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int srclen = _strlen(src);

	for (i = 0; i <= srclen && i < n; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
