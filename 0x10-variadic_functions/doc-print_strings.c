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
	unsigned int count;	/* we initialize our counter here */
	va_list Uduak;		/* we name our va_list here as "Uduak" */

	char *str;	/* we declare a pointer to hold the string */

	va_start(Uduak, n);	/* we initialize our [va_start] here so... */
	/* compiler knows [n] is the start of our counting */

	for (count = 0; count < n - 1; count++)	/* [for loop] here enables us to... */
	/* access into the [va_list]. But this time, we choose to stop...*/
	/* at when [n- 1], to allow for us to tell the compiler where... */
	/* to stop printing the [separator] string */
	{
		if (separator)	/* we tell compiler if [separator] is a string, include... */
		/* it and print both [va_arg(list, int)] and [separator] together */
		{
			str = va_arg(Uduak, char *);	/* we copy what va_arg is pointing to... */
			/* into [str], such that [str] will hold or retain the string value */
			if (!str)	/* If while [separator] is a string, and one of...*/
			/* [str] or [va_arg(Uduak, char *)] is NULL,...*/
				printf("(nil)%s", separator);	/*...replace [str] with "(nil)" instead */
			else	/* If while [separator] is a string, and one of...*/
			/* [str] or [va_arg(Uduak, char *)] is NOT NULL, BUT a string,...*/
				printf("%s%s", str, separator);	 /*...print [str] instead */
		}
		else if (!separator)	/* we tell compiler if [separator] is...*/
					/* NULL, omit it but still print [str] */
			printf("%s", va_arg(Uduak, char *));	/* If while [separator]... */
			/* is NULL and one of [str] or [va_arg(Uduak, char *)] is a string,... */
			/* let compiler print [str] and omit [separator] */
	}
	printf("%s", va_arg(Uduak, char *));	/* compiler break out of [for-loop]...*/
	/* & print last nth argument without  putting [separator] */
	printf("\n");	/* and add new line */
	va_end(Uduak);	/* we end the list here */
}
