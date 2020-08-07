#include <stdio.h>

/**
* main - It prints all decimal numbers separated by
* a coma and a space, followed by a new line.
* Return: nothing(void).
*/
int main(void)
{
	int a = '0';

	while (a <= 57)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
