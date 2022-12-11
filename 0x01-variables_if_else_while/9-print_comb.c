#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Success at 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
