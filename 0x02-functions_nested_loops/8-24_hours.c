#include "main.h"
/**
 * jack_bauer - prints the time in 24-hour format
 * @void: void
 * Return: void
 */
void jack_bauer(void)
{
	int hour_1;
	int hour_2;
	int minute_1;
	int minute_2;

	for (hour_1 = 0; hour_1 < 3; hour_1++)
	{
		for (hour_2 = 0; hour_2 < 10; hour_2++)
		{
			for (minute_1 = 0; minute_1 < 6; minute_1++)
			{
				for (minute_2 = 0; minute_2 < 10; minute_2++)
				{
					_putchar(hour_1 + '0');
					_putchar(hour_2 + '0');
					_putchar(':');
					_putchar(minute_1 + '0');
					_putchar(minute_2 + '0');
					_putchar('\n');
				}
			}
			if (hour_1 == 2 && hour_2 == 3)
			{
				break;
			}
		}
	}
}
