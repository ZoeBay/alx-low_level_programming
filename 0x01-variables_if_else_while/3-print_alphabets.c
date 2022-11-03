#include <stdio.h>

/**
 * main - Prints alphabets in lowercase and uppercase.
 *
 * Return: 0.
 */
int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
		putchar(chr);

	for (chr = 'A'; chr <= 'Z'; chr++)
		putchar(chr);
	putchar('\n');

	return (0);
}
