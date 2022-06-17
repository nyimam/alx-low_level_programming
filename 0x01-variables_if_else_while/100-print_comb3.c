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
			if (a != i && a < c)
			{
				putchar('0' + i);
				putchar('0' + a);
			
				if (i != 8 && a != 9)
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
