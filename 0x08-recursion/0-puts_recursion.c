#include "main.h"

/**
 *_puts_recursion - Prints a string
 *@s: String
 *
 * Return:String
 */
void _puts_recursion(char *s)
{
	
	if (*s)
	{
		_puts_recursion(++s);
		_putchar(*s);
	}
}
