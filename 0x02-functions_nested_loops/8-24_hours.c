#include "main.h"
/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 * Description: Start from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour1 = 0;
	int hour2;
	int minute1;
	int minute2;

	while (hour1 < 3)
	{
		hour2 = 0;
		while (hour2 < 10)
		{
			minute1 = 0;
			while (minute1 < 6)
			{
				minute2 = 0;
				while (minute2 < 10)
				{
					_putchar(hour1 + '0');
					_putchar(hour2 + '0');
					_putchar(':');
					_putchar(minute1 + '0');
					_putchar(minute2 + '0');
					_putchar('\n');
					minute2++;
				}
				minute1++;
			}
			hour2++;
			if (hour1 == 2 && hour2 == 4)
			{
				break;
			}
		}

		hour1++;
	}
}
