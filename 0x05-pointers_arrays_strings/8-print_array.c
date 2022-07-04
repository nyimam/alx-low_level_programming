#include "main.h"
#include <stdio.h>
/**
 * print_array - pints n elements of an array
 * @a: pointer to the array
 * @n: number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int length;

	if (n < 0)
		printf("\n");
	else if (n == 0)
		printf("%i\n", a[0]);
	else if (n > 0)
	{
		for (length = 0; length < (n - 1); length++)
			printf("%i, ", a[length]);

		printf("%i\n", a[n - 1]);
	}
}
