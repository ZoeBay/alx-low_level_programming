#include "main.h"

/**
 *print_alphabet_x10 - Prints 10 times the lowercase alphabets
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char lower, i;

	i = 0;

	while (i < 10)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{		
			_putchar(lower);
		}
		i++;
		_putchar('\n');
	}
}
