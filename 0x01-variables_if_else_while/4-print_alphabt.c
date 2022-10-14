#include <stdio.h>

/**
 *main - Print all letters except q and e.
 *
 * Return: 0.
 */
int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		if (chr != 'q' && chr != 'e')
			putchar(chr);
	}
	putchar('\n');

	return (0);
}
