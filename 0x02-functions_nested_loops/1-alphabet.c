#include "main.h"

/**
 * print_alphabet - lowercase alphabet.
 *
 * Description:  user-defined function.
 */

void print_alphabet(void)

{
	char ch = 97;

	for (ch = 97; ch < 123; ch++)

		_putchar(ch);

	if ('a' != 'z')

	_putchar('\n');
}
