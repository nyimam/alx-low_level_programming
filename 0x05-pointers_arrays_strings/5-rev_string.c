#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: the string to be printed
 * Return: 0
 */
void rev_string(char *s)
{
	int i, length, half;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
		;

	i = 0;
	half = len / 2;

	while (half--)
	{
		temp = s[length - i - 1];
		s[length - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
