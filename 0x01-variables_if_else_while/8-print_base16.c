#include <stdio.h>

/**
* main- void
*
* Description: Displays all numbers of base 16 in lowercase using putchar
*
* Return: 0
*/

int main(void)
{
	int x;
	int n;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	for (n = 'a'; n <= 'f'; n++)
		putchar(n);

	{
	putchar('\n');
	}
	return (0);
}
