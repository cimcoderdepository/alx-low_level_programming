#include "main.h"

/**
 * swap_int - A function that takes a pointer to
 * an int as parameter and updates the value
 * it points to to 98
 *
 * @a: value to be swapped
 * @b: value to be swapped
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	{
		*a = *b;
		*b = c;
	}
}
