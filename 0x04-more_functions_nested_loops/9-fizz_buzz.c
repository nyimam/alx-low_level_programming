#include <stdio.h>
/**
 * main - Fizz buzz test
 * Return: Always 0
 */
int main(void)
{
	int i, a;

	for (i = 0; i < 100; i++)
	{
		a = i + 1;

		if (a % 3 == 0)
			printf("Fizz ");
		else if (a % 5 == 0)
		{
			if (a == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%i ", a);
	}
	printf("\n");
	return (0);
}
