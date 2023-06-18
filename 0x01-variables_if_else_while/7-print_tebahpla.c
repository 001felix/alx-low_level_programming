#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	char alp[26] =
		"zyxwvutsrqponmlkjihgfedcba";

	int p;

	for (p = 0; p < 26; p++)
	{
		putchar(alp[p]);
	}
	putchar('\n');

	return (0);
}
