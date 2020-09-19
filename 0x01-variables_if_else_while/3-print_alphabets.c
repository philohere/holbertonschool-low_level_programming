#include <stdio.h>

/**
* main- void
*
* Description: Displays the alphabet in lowercase followed by uppercase all on
* one line
*
* Return: 0
*/

int main(void)
{
	int x;
	int a;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}

	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	{
	putchar('\n');
	}
	return (0);
}
