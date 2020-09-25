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
		{
			printf("%d", i);
		printf(" ");
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		printf(" ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		printf(" ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		printf(" ");
		}
		else
			printf("\n");
	}
	printf("\n");
	return (0);
}
