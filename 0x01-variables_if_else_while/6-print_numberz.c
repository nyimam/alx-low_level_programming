#include <stdio.h>
#include <stdlib.h>
/**
 * main - print 0 to 9
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
