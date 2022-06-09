#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Returns: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char letter = 'a';

	while (i < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
