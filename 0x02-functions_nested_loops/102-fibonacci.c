#include <stdio.h>
#include <stdlib.h>
/**
 * main - fibonacci
 * Return: 0
 */
int main(void)
{
	int i;
	long int a = 0, b = 1, next;

	for (i = 0; i < 50; i++)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 49)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
