#include"main.h"
/**
 * _strpbrk - search a string for a set of bytes
 * @s: string to be searched
 * @accept: string to match
 * Return: pointer to the byte that matches
 * or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return ('\0');
}
