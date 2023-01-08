#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: argument count input
 * @argv: the 0th position string
 * Return: 0 at success
 */

int main(int argc, char *argv[])
{

	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
