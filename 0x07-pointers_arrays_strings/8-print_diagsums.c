#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, b, sum1 = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sum1 = sum1 + a[i];

	for (b = size - 1; b <= (size * size); b = b + size - 1)
		sum2 = sum2 + a[b];
	printf("%d, %d\n", sum1, sum2);
}
