#include "main.h"

/**
 *_abs - Computes the absolute value of an integer
 *@i: integer
 *Return:Absolute value of i
 */
int _abs(int i)
{
	if (i < 0)
		i = (-1) * i;
	return (i);
}
