#include "main.h"

/**
 * swap_int - swaps the values of a and b
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
