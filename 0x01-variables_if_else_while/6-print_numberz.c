#include <stdio.h>

/**
 *main - Print single digit numbers using putchar without char viariables.
 *
 * Return:0.
 */
int main(void)
{
	int i = 0;
	
	while (i < 10)
	{	
		putchar((i % 10) + '0');
		i++;
	}
	putchar('\n');
	return (0)
}
