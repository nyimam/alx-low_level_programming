#include "main.h"
/**
 * puts2 - prints out every other character of
 * a string followed by a new line
 * @str: pointer to the string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
