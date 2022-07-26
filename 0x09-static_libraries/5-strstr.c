#include "main.h"
/**
 * _strstr - finds first occurence of substring
 * not comparing the \0
 * @haystack: string to be searched
 * @needle: substring to look for
 * Return: pointer to beginning of string
 * or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k = 1;

	if (needle[0] == '\0')
		return ('\0');

	for (i = 0; haystack[i] > '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = i + 1; needle[k] > '\0'; j++, k++)
			{
				if (needle[k] != haystack[j])
					break;
			}
			if (needle[k] == '\0')
			{
				char *ptr = &(haystack[i]);

				return (ptr);
			}
		}
	}
	return ('\0');
}

