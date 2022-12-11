#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Success at 0
 */
int main(void)
{
	int i;
	char ch;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
