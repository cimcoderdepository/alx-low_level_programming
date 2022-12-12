#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d, p, c;

	for (d = '0'; d < '8'; d++)
	{
		for (p = d + 1; p <= '8'; p++)
		{
			for (c = d + 2; c <= '9'; c++)
			{
				if (c != p && p != d)
				{
					putchar(d);
					putchar(p);
					putchar(c);

					if (d == '7' && p == '8' && c == '9')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
