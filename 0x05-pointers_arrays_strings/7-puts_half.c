#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to print half of
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, n;

	while (str[i])
		i++;

	if (i % 2 == 0)
		n = (i - 1) / 2;
	else
		n = i / 2;
	
	i = n + 1;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
