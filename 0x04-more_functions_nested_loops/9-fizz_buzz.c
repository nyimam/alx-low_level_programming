#include <stdio.h>
/**
 * main - Fizz buzz test
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 1; i <= 100; i++)
	{
		if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%i", a);

		if (a != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
