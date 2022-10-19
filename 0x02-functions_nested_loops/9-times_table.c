#include "main.h"

/**
 *times_table - Prints the 9 times table.
 *
 * Return: times tables
 */
void times_table(void)
{
	int x, y, a;
	x = 0;

	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			a = x * y;
			y += 1;
			if (( a / 10) > 0)
			{
				_putchar((a / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((a % 10) + '0');
			if (y < 10)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		x += 1;
		_putchar('\n');
	}
}
