#include <stdio.h>

/**
 * main - Print combinations of2 digit numbers.
 *
 * Return: zero.
 */
int main(void)
{
	int i, l;

	for (i = 0; i < 98; i++)
	{
		for (l = i + 1; l < 99; l++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((l / 10) + '0');
			putchar((l % 10) + '0');

			if (i == 98 && l == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
