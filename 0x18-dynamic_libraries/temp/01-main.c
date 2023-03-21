#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	int a = 66, b = -76;

	printf("%d\n", add(a, b));
	printf("%d\n", sub(a, b));
	printf("%d\n", mul(a, b));
	printf("%d\n", div(a, b));
	printf("%d\n", mod(a, b));
	return (EXIT_SUCCESS);
}
