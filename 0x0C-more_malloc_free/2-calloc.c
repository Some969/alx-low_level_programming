#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory
 * @nmemb: number of members
 * @size: size
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	l = nmemb * size;
	a = malloc(l);
	if (a == NULL)
		return (NULL);
	while (i < l)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
