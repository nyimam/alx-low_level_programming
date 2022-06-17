#include <stdio.h>
#include <stdlib.h>
/**
 * main - print combinations
 * Return: 0
 */
int main(void)
{
	int i, a;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 10; a++)
		{
			if (a != i && i < a)
			{
				putchar('0' + i);
				putchar('0' + a);
			
				if (i + a != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}	
	putchar('\n');
	return (0);
}
