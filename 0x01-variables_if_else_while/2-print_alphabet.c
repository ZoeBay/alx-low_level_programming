#include <stdio.h>
/**
 * main:Enter main program to print lowercase alphabet
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
