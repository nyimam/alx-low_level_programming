#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: char string to be converted
 * Return: integer
 */
int _atoi(char *s)
{
	int sign = 1, resp = 0, num, i;

	for (num = 0; !(s[num] >= 48 && s[num] <= 57); num++)
	{
		if (s[num] == '-')
		{
			sign *= -1;
		}
	}

	for (i = num; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (sign * resp);
}
