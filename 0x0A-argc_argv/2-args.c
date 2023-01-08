#include "stdio.h"

/**
 * main - a program that prints the number of arguments passed ncling the first
 * @argc: argument count input or number of arguments passed
 * @argv: all the strings
 * Return: 0 at success
 */

int main(int argc, char *argv[])
{

	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
