#include "main.h"
/**
 * swap_int - swap the values of two integers
 * @a: swap integer
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

