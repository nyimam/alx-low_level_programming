#include <stdio.h>
#include <stdlib.h>
/**
 * main - print 0 to 9
 * Return: 0
 */
int main(void)
{
	int n;
	char letter;

	for (n = 0; n < 10; n++)
		putchar('0' + n);
	for (letter = 'a'; letter < 'g'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
