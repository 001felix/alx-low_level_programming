#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet *10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char n;
	int r;

	r = 0;
	while (r < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
		r++;
	}

}
