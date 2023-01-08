#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: argument count input or number of arguments passed
 * @argv: all the strings
 * Return: 0 at success
 */

int main(int argc, char *argv[])
{

	if (argv[0])
	{
		printf("%d\n", argc - 1);

	}
	return (0);
}
