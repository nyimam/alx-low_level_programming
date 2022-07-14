#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * print_diagsums - prints sum of two diagonals of a square matrix
 * @a: pointer to the square matrix
 * @size: size of matrix
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i]
		sum2 += a[size - i - 1];
		a += size;
	}

	printf("%i, %i"\n, sum1, sum2);
}
