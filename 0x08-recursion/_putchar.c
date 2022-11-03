#include <unistd.h> 

/**
 *_putchar - Prints
 *
 *return:0
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
