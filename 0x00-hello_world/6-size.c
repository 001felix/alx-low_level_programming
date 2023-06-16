#include <stdio.h>
/**
 * main - program that prints size of various types of computer
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeofof(a));
printf("Size of a int: %zu byte(s)\n", (unsigned long)sizeofof(b));
printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeofof(c));
printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeofof(d));
printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeofof(e));
return (0);
}

