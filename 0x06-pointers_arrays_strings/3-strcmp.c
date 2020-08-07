#include "holberton.h"
#include <stdio.h>

/**
* _strcmp - compares twp strings
* @s1: The string number 1
* @s2: The string nymber 2
* Return: if @s1 is respectively equal to s2 reurn 0
* if @sr1 is less than @s1 return -15
* if @sr1 is greater than @s2 return 15
*/

int _strcmp(char *s1, char *s2)
{
	int lgsr1 = 0;
	int lgsr2 = 0;
	int p = 0;
	int diference = 0;

	while (s1[p] != '\0' || s2[p] != '\0')
	{
		if (s1[p] != s2[p])
		{
			diference++;
		}
		lgsr1 = lgsr1 + s1[p];
		lgsr2 = lgsr2 + s2[p];
		p++;
	}
	if (diference > 0)
	{
		if (lgsr1 > lgsr2)
		{
			return (15);
		}
		else if (lgsr1 < lgsr2)
		{
			return (-15);
		}
		else if (lgsr1 == lgsr2)
		{
			return (15);
		}
	}
	else
	{
		return (0);
	}
	return (0);
}

