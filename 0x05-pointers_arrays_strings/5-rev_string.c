#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: the string to be printed
 * Return: 0
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
