#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints from n to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
	int a;

	if (n == 98)
		;
	else if (n < 98)
	{
		for (a = n; a < 98; a++)
		{
			printf("%d, ", a);
		}
	}
	else
	{
		for (a = n; a > 98; a--)
		{
			printf("%d, ", a);
		}
	}
	printf("98\n");
}
