#include "main.h"
/**
 * jack_bauer - This function prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 *
 * Return: no return as fucntion is void
 */
void jack_bauer(void)
{
	int hours = 0;
	int mins = 0;
	int hours_left;
	int mins_left;

	while (hours <= 23)
	{
	while (mins <= 59)
	{
	mins_left = mins % 10;
	hours_left = hours % 10;
	_putchar(hours / 10);
	_putchar(hours_left);
	_putchar(':');
	_putchar(mins /10);
	_putchar(mins_left);
	mins++;
	_putchar('\n');
	}
	hours++;
	mins = 0;
}
}
