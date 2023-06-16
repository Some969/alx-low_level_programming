#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int a;
	char e;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (e = 'a'; e <= 'f'; e++)
		putchar(e);
	putchar('\n');
	return (0);
}
