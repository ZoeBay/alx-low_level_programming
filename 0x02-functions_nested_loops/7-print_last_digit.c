#include "main.h"

/**
 *print_last_digit - Prints the last digit of a number.
 *@n - number
 *Return: Last digit of a number
 */
int print_last_digit(int i)
{
	int num;

	num = (i % 10);
	_putchar(num + '0');
	return (num);
}
