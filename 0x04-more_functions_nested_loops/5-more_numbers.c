#include "main.h"
/**
 * more_numbers - prints numbers 0 to 14,
 * followed by new line 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i, a;

	for (a = 0; a < 11; a++)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
