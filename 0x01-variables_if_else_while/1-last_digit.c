#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints where an inout number is positibe or negative
 * Return: 0
 */
int main(void)
{
	int n, result;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	result = n % 10;

	if (result == 0)
		printf("Last digit of %i is %d and is 0\n", n, result);
	else if (result > 5)
		printf("Last digit of %i is %d and is greater than 5\n", n, result);
	else if (result < 6 && result != 0)
		printf("Last digit of %i is %d and is 0\n", n, result);

	return (0);
}
