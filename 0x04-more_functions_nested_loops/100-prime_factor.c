#include <stdio.h>
#include <math.h>
/**
 * main - print LPF of 612852475143
 * Return: always 0
 */
int main(void)
{
	unsigned int long num = 612852475143, i = (int) sqrt(num);

	while(1)
	{
		if (num % i == 0)
		{
			printf("%lu \n", num / i);
			break;
		}
		i--;
	}

	return (0);
}
