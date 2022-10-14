#include <stdio.h>

/**
 * Main - Print lowercase alphabets in reverse.
 *
 * Return:Zero;
 */
int main(void)
{
	char chr;

	for (chr = 'z'; chr >= 'a'; chr--)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
