#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - check if n is a prime number
 * @n: number to be checked
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check alll number
 * @n: number
 * @resp: int
 * Return: int
 */
int check_prime(int n, int resp)
{
	if (resp >= n && n > 1)
		return (1);
	else if (n % resp == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, resp + 1));
}
