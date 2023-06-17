#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */

int main(void)
{
	char alp[24] =
	"abcdfghijklmnoprstuvwxyz";

	int r;

	for (r = 0; r < 24; r++)
	{
		putchar(alp[r]);
	}
	putchar('\n');

	return (0);
}
