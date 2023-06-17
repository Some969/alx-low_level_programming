#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char a, e, c;

	e = 'e';
	c = 'q';

	for (a = 'a'; a <= 'z'; a++)
	{
	if (a != e && a != c)
	putchar(a);
	}
	putchar('\n');
	return (0);
}

