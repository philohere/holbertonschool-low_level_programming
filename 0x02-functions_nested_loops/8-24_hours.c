#include "holberton.h"

/**
 * jack_bauer - void
 *
 * Description: Display 00:00 to 23:59
 *
 * No Return
 */

void jack_bauer(void)
{
	int hr = 0;
	int min = 0;

	for (; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10) + '0');
		_putchar((hr % 10) + '0');
	_putchar(':');
	_putchar((min / 10) + '0');
	_putchar((min % 10) + '0');
	_putchar('\n');
}
}
}
