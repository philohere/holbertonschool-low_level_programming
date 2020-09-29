#include "holberton.h"

/**
 * swap_int - Takes a pointer to an integer twice
 * @a: This is a pointer variable
 * @b: This is a pointer variable
 * Return - void
 */

void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
		*b = x;
}
