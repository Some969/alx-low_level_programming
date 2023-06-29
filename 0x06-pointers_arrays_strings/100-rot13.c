#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoder rot13
 * @a: pointer to string parameters
 * Return: *a
 */
char *rot13(char *a)
{
	int i;
	int j;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
	for (j = 0; j < 52; j++)
	{
	if (a[i] == data[j])
	{
	a[i] = datarot[j];
	break;
	}
	}
	}
	return (a);
}
