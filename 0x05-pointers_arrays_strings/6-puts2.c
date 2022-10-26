#include "main.h"

/**
 *puts2 - prints every other character of a string
 *@str:String
 *
 * Return:0
 */
void puts2(char *str)
{
	int i;
	
	i = 0;
	
	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 3;
	}
	_putchar('\n');
}
