#include "main.h"
/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 * Description: Start from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int count = 0;
	int hour1;
	int hour2;
	int minute1;
	int minute2;

	while (count < 1440)
	{
		hour1 = 0;
		while (hour2 < 10)
		{
			hour2 = 0;
			while (minute1 < 60)
			{
				while (minute2 < 10 )
				{
					minute2 = 0;
					_putchar(hour1 + '0');
					_putchar(hour2 + '0');
					_putchar(':');
					_putchar(minute1 + '0');
					_putchar(minute2 + '0');
					_putchar('\n');
					minute2++;
					count++;
				}
				minute1++;
			}
			hour2++;
		}
		hour1++;

	}
}
