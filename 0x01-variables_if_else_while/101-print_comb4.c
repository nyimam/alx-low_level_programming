#include <stdio.h>
#include <stdlib.h>
/**
 * main - print combinations
 * Return: 0
 */
int main(void)
{
	int i, a, b;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 10; a++)
		{
			for (b = 0; b < 10; b++)
			{
				if (b != a && b != i && a < b && i < a)
				{
					putchar('0' + i);
					putchar('0' + a);
					putchar('0' + b);
					if (i + a + b != 7 + 8 + 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
