#include "main.h"
/**
 * print_square- prints a diagonal
 * @n: size of square
 * Return: 0
 */
void print_square(int n)
{
	int i, a;

	for (i = 0; i < n; i++)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
