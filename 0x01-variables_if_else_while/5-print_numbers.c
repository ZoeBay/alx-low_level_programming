#include <stdio.h>

/**
 *main - Print base 10 numbers
 *
 * Return:0.
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');

	return(0);
}
