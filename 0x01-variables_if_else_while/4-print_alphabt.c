#include <stdlib.h>
#include <stdio.h>
/**
 * main - print each letter of the alphabet except q and e
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
			continue;
		else
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
