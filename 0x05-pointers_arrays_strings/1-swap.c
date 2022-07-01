#include "main.h"
/**
 * swap_int- swaps the value that the pointers a and b point to
 * @a: pointer to first int value
 * @b: pinter to the second int value
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;

	*a = y;
	*b = x;
}
