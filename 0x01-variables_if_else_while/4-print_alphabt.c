#include <stdio.h>

/**
* main - pprints the alphabet in lowercas except 'q' and 'e',
* followed by a new line.
* Return: nothing(void).
*/
int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
