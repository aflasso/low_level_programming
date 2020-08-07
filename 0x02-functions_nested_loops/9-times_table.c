#include "holberton.h"
#include <stdio.h>

/**
* times_table - prints the table of 9
*/

void times_table(void)
{
	int zero = 0;
	int numero = 0;
	int por = 0;
	int base = 0;
	int prelastdigit ;
	int lastdigit ;

	while (zero < 10)
	{

		por = 0;

		while (por <= 9)
		{
			numero = base * por;
			if (numero > 9 )
			{
				lastdigit = numero%10;
				prelastdigit = (numero%100)/10;
				_putchar(prelastdigit + '0');
				_putchar(lastdigit + '0');
			}
			else
			{
				_putchar(numero + '0');
			}
			if (por != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			por++;
		}

			_putchar('\n');
		zero++;
		base++;
	}
}
