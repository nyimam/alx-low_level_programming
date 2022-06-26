#include "main.h"
/**
 * more_numbers - prints numbers 0 to 14,
 * followed by new line 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i, c, a;

	for (a = 0; a < 10; a++)
	{
		for (i = 0; i < 15; i++)
		{
			c = i;

			if (i > 9)
			{
				_putchar('1');
				c = i % 10;
			}
			_putchar(c + '0');
		}
		_putchar('\n');
	}
}
