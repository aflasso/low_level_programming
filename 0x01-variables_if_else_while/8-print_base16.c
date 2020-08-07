#include <stdio.h>

/**
* main - prints all the numbers in base 16
* in lowercase, followed by a new line.
* Return: nothing(void).
*/
int main(void)
{
	int a = '0';
	int n = 'a';

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
