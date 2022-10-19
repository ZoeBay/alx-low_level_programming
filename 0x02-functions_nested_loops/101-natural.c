#include <stdio.h>
/**
 *main - Enter main
 *
 * Return: 0
 */
int main(void)
{
	int a, b , c, i;

	a = 0;
	b = 0;
	c = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			a += i;
		}
		else if ((i % 5) == 0)
		{
			b += i;
		}
	}
	c = a + b;
	printf("%lu\n", c);
	return (0);
}
