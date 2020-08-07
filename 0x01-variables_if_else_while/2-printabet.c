#include <stdio.h>

/**
* main - prints the alphabet in lowercase,
* followed by a new line.
* Return: nothing(void)
*/
int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
