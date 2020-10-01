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
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int s1_len = _strlen(s1);
	int s2_len = _strlen(s2);

	if (s1_len != 0)
	{
		i = s1_len - s2_len;
	return (i);
	}
	else if (s2_len != 0)
	{
		i = s2_len - s1_len;
		return (i);
	}
	else
		return (0);
}
