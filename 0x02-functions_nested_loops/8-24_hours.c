#include "main.h"
/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 * Description: Start from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 23; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			if (hour <10 )
			{
				_putchar('0');
			}

			_putchar(hour + '0');
			_putchar(':');

			if (minute <10 )
                        {
                                _putchar('0');
                        }
			_putchar(hour + '0');
		}

	}
}
