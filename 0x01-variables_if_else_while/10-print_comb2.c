#include <stdio.h>
#include <stdbool.h>

/**
* main- void
*
* Description: Display numbers 0-99 with a comma and space between each number
*
* Return: 0
*/

int main(void)
{
	int x;

	for (x = 00; x <= 99; x++)
	{
		putchar((x / 10) + '0');
		putchar((x % 10) + '0');

		if (x < 99)
	{
		putchar(',');
		putchar(' ');
	}
	}
	{
	putchar('\n');
	}
	return (0);
}
