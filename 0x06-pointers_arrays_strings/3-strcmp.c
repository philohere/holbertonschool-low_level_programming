#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && s2[j] != '\0')
	{
	i++;
	j++;
}
	return (*s1 - *s2);
}
