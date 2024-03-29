#include <unistd.h>
#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: an input number to be represented in binary
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	write(1, (n & 1) ? "1" : "0", 1);
}

