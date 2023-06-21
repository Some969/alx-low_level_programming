#include <stdio.h>
/**
 * main - print sum of multiples of 3 or 5 below 1024
 * Return: 0 (success)
 */
int main(void)
{
	int a, z = 0;

	while (a < 1024)
	{
	if ((a % 3 == 0) || (a % 5 == 0))
	{
	z += a;
	}
	a++;
	}
	printf("%d\n", z);
	return (0);
}
