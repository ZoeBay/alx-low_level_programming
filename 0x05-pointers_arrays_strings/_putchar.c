#include <unistd.h> 

/**
 *_putchar - Prints
 *
 * Return:0
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
