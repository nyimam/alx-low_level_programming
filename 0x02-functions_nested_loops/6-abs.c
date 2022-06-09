#include "main.h"
/**
 * _abs - prints absolute value of passed number
 * @n: number to be checked
 * Return: 1 if positive, -1 if negative and 0 if false
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		int b = (-1) * n;

		return (b);
	}
}
