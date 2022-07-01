#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 * Return: 0
 */
void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	while (s[i])
	{
		_putchar(s[i]);
		i--;
		if (i < 0)
			break;
	}
	_putchar('\n');
}
