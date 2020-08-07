#include <stdio.h>

/**
* main - prints the alphabet first in uppercase,
* then in lowercase, followed by a new line.
* Return: nothing(void).
*/
int main(void)
{
	int a = 'a';
	int n = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
