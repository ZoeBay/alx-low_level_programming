#include <stdio.h>
/**
 * main-Entry point
 *
 * Return:0
 *
 */
int main(void)
{
	int i;
	long int l;
	long long int ll;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", (int)sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", (long int)sizeof(l));
	printf("Size of a long long int: %lli byte(s)\n", (long long int)sizeof(ll));
	printf("Size of a float: %0.0f byte(s)\n", (float)sizeof(f));
	return (0);
}
