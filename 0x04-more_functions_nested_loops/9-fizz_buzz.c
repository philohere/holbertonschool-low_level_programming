#include "holberton.h"
#include <stdio.h>

/**
 * main - Fizz-Buzz
 * Return: int
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d"\n, i);

		else if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz\n");

		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz\n");

		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz\n");
	}
	printf("\n");
	return (0);
}
