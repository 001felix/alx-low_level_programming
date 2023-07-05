#include "main.h"
#include <stdio.h>
/**
 * _sqrt - calculate natural square root
 * @n: number to calc square root
 * @i: iterate number
 * Return: natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
