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

	for (x = 'a'; x <= 'z'; x++)

		if (x != 'e' && x != 'q')
			putchar(x);


	putchar('\n');

	return (0);
}
