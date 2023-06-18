#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int r;
	int p;

	for (r = 48; r <= 56; r++)
	{
		for (p = 49; p <= 57; p++)
		{
			if (p > r)
			{
				putchar(r);
				putchar(p);

				if (r != 56 || p != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

