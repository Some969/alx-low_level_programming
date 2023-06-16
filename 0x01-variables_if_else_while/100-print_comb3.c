#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int v;
	int u;

	for (v = '0'; v < '9'; v++)
	{
	for (u = v + 1; u <= '9'; u++)
	{
	if (u != v)
	{
	putchar(v);
	putchar(u);
	if (v == '8' && u == '9')
	{
	putchar(',');
	putchar(' ');
	continue;
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
