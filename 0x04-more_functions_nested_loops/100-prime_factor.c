#include <stdio.h>
#include <math.h>
/**
 * main - print LPF of 612852475143
 * Return: always 0
 */
int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long lpf = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
			lpf = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", lpf);

	return (0);
}
