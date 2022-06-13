#include "main.h"
#include "stdio.h"
/**
 * swap_int - swaps the values of two integers
 * @a: First parameter to be swapped
 * @b: Second parameter to be swapped
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

