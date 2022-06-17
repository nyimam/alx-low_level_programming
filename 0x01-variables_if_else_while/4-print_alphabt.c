#include <stdlib.h>
#include <stdio.h>
/**
 * main - print each letter of the alphabet except q and e
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z' && (letter != ('q' || 'e'); letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
