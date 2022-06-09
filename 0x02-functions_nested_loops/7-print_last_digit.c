#include "main.h"
/**
 *  print_last_digit - prints absolute value of passed number
 * @n: number to be checked
 * Return: number
 */
int print_last_digit(int n)
{
	int value;

	if (n < 0)
		value = -1 * (n % 10);
	else
		value = n % 10;
	
	_putchar(value + '0');
	return (value);
}
