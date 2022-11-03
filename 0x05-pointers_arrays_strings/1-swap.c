#include "main.h"

/**
 *swap_int - Swap values of two intgers
 *@a:Integer
 *@b:integer
 *
 * Return:0
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
