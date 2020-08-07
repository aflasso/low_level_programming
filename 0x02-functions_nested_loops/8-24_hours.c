#include "holberton.h"

/**
* jack_bauer - prints every minute of a day
*/

void jack_bauer(void)
{
	int segundosz = '0';
	int segundosd = '0';
	int minutos = '0';
	int horas = '0';
	int lineas = 0;

	while (lineas <= 143)
	{
		segundosd = '0';
		while (segundosd <= '9')
		{
			_putchar(horas);
			_putchar(minutos);
			_putchar(':');
			_putchar(segundosz);
			_putchar(segundosd);
			segundosd++;

			_putchar('\n');
		}
		segundosd = 58;
		if (segundosd == 58)
		{
		segundosd = 58;
		segundosz++;
		}
		if (segundosz == '6')
		{
		segundosz = '0';
		minutos++;
		}
		if (minutos == 58)
		{
		minutos = '0';
		horas++;
		}
		lineas++;
	}
}
