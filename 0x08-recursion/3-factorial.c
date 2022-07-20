#include "main.h"
/**
 * factorial - returns factorial of a number
 * n: number whose factorial is being calculated
 * Return: n factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
	{
		return (n * factorial(n - 1));
	}
}
