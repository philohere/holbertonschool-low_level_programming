#include <stdio.h>

/**
* main- void
*
* Description: Displays all numbers in base 10 starting from 0 only using
* putchar
*
* Return: 0
*/

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');


	{
	putchar('\n');
	}
	return (0);
}
