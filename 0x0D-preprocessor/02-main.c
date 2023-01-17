#include <stdio.h>

/**
 * main - a program that prints the name of the file it was
 * compiled from, followed by a new line.
 *
 * Return: always 0 at success
*/

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
