#include <stdio.h>

/**
* main- void
*
* Description: Displays the alphabet in lowercase
*
* Return: 0
*/

int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}

	{
	putchar('\n');
	}
	return (0);
}
