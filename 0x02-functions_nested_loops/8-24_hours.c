#include "main.h"
/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 * Description: Start from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	while (hour < 23)
	{
		while (minute < 60)
		{
			if (hour < 10)
			{
				_putchar('0');
			}

			_putchar(hour + '0');
			_putchar(':');

			if (minute < 10)
                        {
                                _putchar('0');
                        }
			_putchar(minute + '0');
			_putchar('\n');
			minute++;
		}
		hour++;
		minute = 0;

	}
}
