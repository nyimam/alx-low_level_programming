#include "main"
/**
 * _pow_recursion - return the power of a number
 * @x: base
 * @y: exponent
 * Return: power of x to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, (y - 1)));
}
