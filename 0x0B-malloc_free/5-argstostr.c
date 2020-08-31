#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
int large(int, char **);

/**
* argstostr - concatenates all the arguments of your program.
* @ac: the number of arguments
* @av: an array char that contains all the arguments inside a string
*
* Return: a pointer to the new string
*/
char *argstostr(int ac, char **av)
{
	char *dup;
	int x = 0;
	int y = 0;
	int b = 0;
	int p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	p = large(ac, av);

	dup = malloc(sizeof(*dup) * p);

	if (dup == NULL)
	{
		return (NULL);
	}
	while (ac > 0)
	{
		y = 0;
		while (av[x][y] != '\0')
		{
			dup[b] = av[x][y];
			b++;
			y++;
		}
		if (av[x][y] == '\0')
		{
			dup[b] = '\n';
			b++;
		}
		x++;
		ac--;
	}
	return (dup);
}

/**
* large - sum the large of each argument passed to it even the '\0' char
* @ac: the number of arguments
* @av: an char array that contains all the arguments inside a string
*
* Return: the sum of the large of all the arguments passed into it
*/
int large(int ac, char **av)
{
	int x = 0;
	int y = 0;
	int sum = ac;

	while (ac > 0)
	{
		y = 0;
		while (av[x][y] != '\0')
		{
			sum++;
			y++;
		}
		ac--;
		x++;
	}
	return (sum);
}
