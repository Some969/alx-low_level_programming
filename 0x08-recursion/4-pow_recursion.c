#include "main.h"
/**
 * _pow_recursion - return value of x raised to power y
 * @x: value of multiple
 * @y: times to multiply the value
 * Return: value multiplied by y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
