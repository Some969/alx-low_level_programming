#include "main.h"
/**
 * _isdigit - checks for a digit(0 to 9)
 * @c: integer being checked
 * Return: 1 if digit or 0 if anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
