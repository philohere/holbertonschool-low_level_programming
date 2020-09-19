#include <stdio.h>

/**
* main- void
*
* Description: Display numbers 0-9 with a comma and space between each number
*
* Return: 0
*/

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);

	if (x < '9')
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
