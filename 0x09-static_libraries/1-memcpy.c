#include "main.h"
/**
 * _memcpy - copies memory from src to dest
 * @src: source
 * @dest: destination
 * @n: number of bytes to be copied
 * Return: pointer to the memory area dest
 */
char *_memcpy(char *src, char *dest, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
