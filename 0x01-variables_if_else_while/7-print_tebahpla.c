#include <stdio.h>

/**
* main - prints the alphabet in lowercase, in reverse,
* followed by a new line.
* Return: nothing(void).
*/
int main(void)
{
	int a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
