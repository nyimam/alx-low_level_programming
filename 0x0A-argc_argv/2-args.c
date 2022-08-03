#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the arguments passed to the program
 * @argc: argument count
 * @argv: arrays of arguments
 * Return: always o
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
