#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
int a = -1, i;
for (i = 0; dest[1] != '\0'; i++)
	;

do {
	a++;
	dest[i] = src[a];
	i++;
} while (src[a] != '\0');

return (dest);
}
