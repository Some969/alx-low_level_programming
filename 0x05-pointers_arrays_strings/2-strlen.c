#include <stdio.h>
/**
 * _strlen - Return the length of a string
 * @s: the string to get the lenght of s
 * Return: the length of s
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	length++;
	return (length);
}
