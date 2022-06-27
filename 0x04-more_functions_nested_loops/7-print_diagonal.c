#include "main.h"
/**
 * print_diagonal - prints a diagonal
 * @n: length of diagonal
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, a;

	for (i = 0; i < n && n > 0; i++)
	{
		for (a = 0; a < i; a++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}

	if (n > 0)
		_putchar('\n');
}
