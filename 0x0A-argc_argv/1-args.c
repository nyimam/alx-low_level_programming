#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of arguments passed to a program
 * @argc: number of arguments
 * @argv: array of argc
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
