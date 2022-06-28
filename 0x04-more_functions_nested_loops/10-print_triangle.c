#include "main.h"
/**
 * print_triangle - prints triangle of stated size
 * @size: size of the triangle
 * Return : void
 */
void print_triangle(int size)
{
	int i, ii;

	for (i = 1; i <= size && size > 0; i++)
	{
		ii = 0;
		while (ii < size - i)
		{
			_putchar(' ');
			ii++;
		}
		ii = 0;
		while (ii < i)
		{
			_putchar('#');
			ii++;
		}

		_putchar('\n');
	}

	if (i == 1)
		_putchar('\n');
}
