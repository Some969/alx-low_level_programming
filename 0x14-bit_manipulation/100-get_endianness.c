#include "main.h"
/**
* get_endianness - check if a machine is big or little
* Return: 0 for big, 1 for little
*/
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
