#include <stdio.h>

/**
* main - it prints from 00 to 99 sparated by
* a coma and a space, followed by a new line.
* Return: nothing(void).
*/
int main(void)
{
	int a = '0';
	int n = '0';

	while (a <= 57)
	{
		putchar(a);
		putchar(n);
		if (n != 57 || a != 57)
		{
		putchar(',');
		putchar(' ');
		}


		n++;
		if (n == 58)
		{
			n = '0';
			a++;
		}



	}

	putchar ('\n');
	return (0);
}
