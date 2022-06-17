#include <stdio.h>
#include <stdlib.h>
/**
 * main - fibonacci
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int a = 0, b = 1, next = 0;

	for (i = 0; i < 96; i++)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 95)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
