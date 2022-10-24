#include "main.h"

/**
 *_puts - Prints a string
 *@str:String
 *
 * Return: length
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
