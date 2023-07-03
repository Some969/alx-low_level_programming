#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, a, value, check;

	value = 0;

	for (i = 0; s[i] != '\0'; a++)
	{
		check = 0;

	for (a = 0; accept[a] != '\0'; a++)
	{
		if (accept[a] == s[a])
		{
			value++;
			check = 1;
		}
	}
	}
	if (check == 0)
}
