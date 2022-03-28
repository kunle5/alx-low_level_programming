#include "main.h"

/**
 * swap_int - swaps the values of two ints
 * @a: first variable
 * @b: second variable
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
