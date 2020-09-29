#include "holberton.h"

/**
 * _strlen - Tells the length of a string
 * @s: String variable
 * Return: count variable
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
 * rev_string - prints the characters of a string in reverse
 * @s: pointer to a string
 * Return: void
 */

void rev_string(char *s)
{
	int count = _strlen(s);
	int a;
	int b;

	for (a = 0, b = count - 1; a < b; a++, b--)
	{
		int x = s[a];

		s[a] = s[b];
		s[b] = x;
	}
}
