#include "main.h"
/**
 * main - print alphabet 10 times
 * Returns: void
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
		_printchar('\n');
	}
}
