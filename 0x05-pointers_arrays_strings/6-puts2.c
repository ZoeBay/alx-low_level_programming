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
		
	for (i = 0; i < (*(str + i)); i+=2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
