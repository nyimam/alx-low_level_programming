#include "main.h"
/**
 * *_strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, n;

	while (src[i])
		i++;

	for (n = 0; n < i && src[n] != '\0'; n++)
		dest[n] = src[n];

	return (dest);
}
