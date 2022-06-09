<<<<<<< HEAD
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return:void
 */

void jack_bauer(void)
{

int h1;
int h2;
int m1;
int m2;
int a = 9;

h2 = 0;
while (h2 <= 2)
{
	if (h2 == 2)
	{
		/*Restrain to 23h, not 29*/
		a = 3;
	}
	h1 = 0;
	while (h1 <= a)
	{
		m2 = 0;
		while (m2 <= 5)
		{
			m1 = 0;
			while (m1 <= 9)
			{
				_putchar('0' + h2);
				_putchar('0' + h1);
				_putchar(':');
				_putchar('0' + m2);
				_putchar('0' + m1);
				_putchar('\n');
				m1++;
			}
			m2++;
		}
		h1++;
	}
	h2++;
}

}
=======
#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Description: prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hours_tens, hours_ones, minutes_tens, minutes_ones, hours_max;

	hours_max = 58;
	hours_tens = '0';
	while (hours_tens < '3')
	{
		if (hours_tens == '2')
		{
			hours_max = '4';
		}
		hours_ones = '0';
		while (hours_ones < hours_max)
		{
			minutes_tens = '0';
			while (minutes_tens < '6')
			{
				minutes_ones = '0';
				while (minutes_ones < 58)
				{
					_putchar(hours_tens);
					_putchar(hours_ones);
					_putchar(':');
					_putchar(minutes_tens);
					_putchar(minutes_ones);
					_putchar('\n');
					minutes_ones++;
				}
				minutes_ones = '0';
				minutes_tens++;
			}
			minutes_tens = '0';
			hours_ones++;
		}
		hours_ones = '0';
		hours_tens++;
	}
}
>>>>>>> f3143e3b16ed10187e8eeeaee1fc72afe6dec219
