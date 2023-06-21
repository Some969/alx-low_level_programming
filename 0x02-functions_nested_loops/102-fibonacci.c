#include <stdio.h>
/**
 * main - prints fibonacci 52 first numbers
 * Return: 0 (success)
 */
int main(void)

{
	int i = 0;
	long m = 1, a = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%ld", m);
	else if (i == 1)
	printf(", %ld", a);
	else
	{
	a += m;
	m = a - m;
	printf(", %ld", a);
	}
	++1;
	}
	printf("\n");
	return (0);
}

