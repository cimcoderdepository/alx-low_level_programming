#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: where separator is the string to be printed between numbers.
 * @n: and n is the number of integers passed to the function.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list Uduak;

	char *str;

	va_start(Uduak, n);

	for (count = 0; count < n - 1; count++)
	{
		if (separator)
		{
			str = va_arg(Uduak, char *);

			if (!str)
			{
				printf("(nil)%s", separator);
			}
			else
			{
				printf("%s%s", str, separator);
			}
		}
		else if (!separator)
		{
			printf("%s", str);
		}
	}
	printf("%s", va_arg(Uduak, char *));
	printf("\n");
	va_end(Uduak);
}
