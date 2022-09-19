#include "main.h"

/**
 * swap_int - swaps the values of two vars
 * @a: first var to swap
 * @b: second var to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	 c = *a;
	*a = *b;
	*b = c;
}
