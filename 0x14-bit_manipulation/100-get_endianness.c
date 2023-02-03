#include "main.h"

int get_endianness(void)
{
	int n = 1;
	char *p = (char *) &n;
	return (*p == 1);
}

