#include <stdio.h>

/**
* main - prints all the decimal numbers only with
* putchar function; followed by a new line:
* Return: nothing(void).
*/
int main(void)
{
	int a = '0';

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
