#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: where separator is the string to be printed between numbers.
 * @n: and n is the number of integers passed to the function.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;	/* we initialize our counter here */
	va_list list;		/* we name our va_list here */

	va_start(list, n);	/* we initialize our va_start here to tell the */
				/* compiler where to start the counting from. [n] is */
				/* the start of our counting */

	for (count = 0; count < n - 1; count++)	/* [for loop] here enables us to... */
						/* access into the index elements of the va_list... */
						/* But this time, we choose to stop at when... */
						/* [n- 1], to allow for us to tell the compiler where... */
						/* to stop printing the [separator] string */
	{

		if (!separator)	/* we tell compiler if [separator] is NULL, omit... */
				/* it and print only integer (which in this case, va_arg(list, int)) */
		{
			printf("%d", va_arg(list, int));	/* only va_arg(list, int) is printed */
		}
		else	/* this block means the reverse of the [if statement] block above.... */
		{
			printf("%d%s", va_arg(list, int), separator);	/* Hence where... */
				/* [separator] is the string to be printed between numbers... */
		}
	}

	printf("%d", va_arg(list, int));	/* when [n - 1] is finally executed,... */
						/* compiler will print last nth argument */
						/* without  putting [separator]... */

	va_end(list);	/* we end the list here */

	printf("\n");	/* and add new line */
}
