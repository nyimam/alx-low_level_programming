#include "main.h"
/**
 * _strchr - returns a pointer to the first
 * occurence of a character in a string
 * @s: string to be searched
 * @c: the character to be searched for
 * Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	unsigned int i, n = 0;
	char *ptr;

	while (s[n])
		n++;

	for (i = 0; i < n && s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			ptr = &s[i];
			return (ptr);
		}
		else
			return (NULL);

	}
}
