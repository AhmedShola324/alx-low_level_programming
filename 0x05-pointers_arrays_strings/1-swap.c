#include "main.h"

/**
 * swap_int - swaps the value of the two integer
 * @a: is a pointer of type int
 * @b: is a pointer of type int
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
