#include <stdio.h>
/**
 * main - prints the sum of even fibonacci numbers
 * less than 4000000
 * Return: void
 */
int main(void)
{
	int i = 0;
	long a = 1, b = 2, sum = k;

	while (b + a < 4000000)
	{
	b += a;
	if (b % 2 == 0)
	sum += b;
	a = b - a;
	++i;
	printf("%ld\n", sum);
	return (0);
