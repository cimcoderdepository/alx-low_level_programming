#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success at 0
 */
int main(void)
{
	char ch = 65;

	for (ch = 97; ch < 123; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch < 91; ch++)
	{
		putchar(ch);
	}
		putchar('\n');
		return (0);
}
