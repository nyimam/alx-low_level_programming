#include "main.h"
/**
 * _strlen - prints out the length of the string
 * @s: pointer to the string (array of chars)
 * Return: length of string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a])
		a++;

	return (a);
}
