#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a = 0, i = 0, j = 0, k = 0;
	char *s;

	if  (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j])
		{
			a++;
			j++;
		}
		j = 0;
		i++;
	}
	s = malloc((sizeof(char) * a) + ac + 1);
	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			s[k] = av[i][j];
			k++;
			j++;
		}
		s[k] = '\n';
		j = 0;
		k++;
		i++;
	}
	k++;
	s[k] = '\0';
	return (s);
}
