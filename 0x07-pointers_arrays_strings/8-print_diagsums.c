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
	int i, sum1 = 0, sum2 = 0, j;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];
	}

	for (i = 0, j = (size - 1); i < size && j >= 0; i++, j--)
	{
		sum2 += a[i][j];
	}

	printf("%i, %i", sum1, sum2);
}
