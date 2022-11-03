#include <stdio.h>

/**
 * main - Prints base 16 numbers.
 *
 * Return: zero.
 */
int main(void)
{
	char chr;

	for (chr = 0; chr <= 54; chr++)
	{
		if (chr <= 9)
		{
			putchar(chr + '0');
		}
		else if (chr >= 49)
		{
			putchar(chr + '0');
		}
	}
	putchar('\n');
	return (0);
}
