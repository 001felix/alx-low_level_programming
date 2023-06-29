#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elemets of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x;
	int d;

	for (x = 0; x < n--; x++)
	{
		d = a[x];
		a[x] = a[n];
		a[n] = d;
	}
}

