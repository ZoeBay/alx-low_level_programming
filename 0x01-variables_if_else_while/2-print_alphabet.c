#include <stdio.h>

/**
 *main - Prints alphabet in lowercase.
 *
 * Return: 0.
 */
int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
		putchar(chr);
	putchar('\n');

	return (0);
}
