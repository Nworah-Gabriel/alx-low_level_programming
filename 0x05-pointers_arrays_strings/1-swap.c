#include "main.h"

/**
 * swap_int - swaps integer values
 *
 * @a: input
 * @b: input
 *
 * Return: Always (Success)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
