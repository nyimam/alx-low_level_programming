#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Returns: void
 */
void print_alphabet_x10(void)
{
	int i;
	char letter = 'a';

	for (i = 0; i < 10; i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
