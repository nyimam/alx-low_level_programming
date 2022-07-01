#include "main.h"
/**
 * _puts - prints out a string
 * followed by a new line
 * @str: pointer to the string to be printed
 * Return: void
 */
void _puts(char *str)
{
	int i, size = _strlen(*str);
	char string = *str;

	for (i = 0; i < size; i++)
		_putchar(string[i]);
	_putchar('\n');
}
