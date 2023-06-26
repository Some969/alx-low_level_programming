#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of integers
 * @a: array of integers
 * @n: numbers of elemnts
 * Return: void
 */
void print_array(int *a, int n)
{
	int e;

	for (e = 0; e < n; e++)
	{
	printf("%d", a[e]);
	if (e != (n - 1))
	{
	printf(",");
	}
	}
	printf("\n");
}
