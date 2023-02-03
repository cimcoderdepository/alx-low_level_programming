#include <unistd.h>
#include "main.h"

#include <unistd.h>

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	write(1, (n & 1) ? "1" : "0", 1);
}

