#include "main.h"
/**
 *print_times_table - Print the n times table
 *@i: number
 *Return: Times table
 */
void print_times_table(int i)
{
	int x, y, z;

	if (i >= 0 && i <= 15)
	{
		for (x = 0; x <= i; x++){_putchar(48);
			for (y = 1; y <= i; y++)
			{
				z = x * y;
				_putchar(44);
				_putchar(32);
				if (z <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(z + 48);
				}
				else if (z <= 99)
				{
					_putchar(32);
					_putchar((z / 10) + 48);
					_putchar((z % 10) + 48);
				}
				else
				{
					_putchar(((z / 100) % 10) + 48);
					_putchar(((z / 10) % 10) + 48);
					_putchar((z % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
