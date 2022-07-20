#include "main.h"
/**
 * _strlen_recursion -returns length of the string
 * @s: pointer to the string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0)
	{
		len += 1;
		_strlen_recursion(s + 1);
	}
	return (len);
}
