#include "main.h"
#include<stdio.h>
/**
 * print_times_table -prints time table
 *
 * @n: number
 */
void print_times_table(int n)
{
	int r, c, p;

	if (n >= 0 && n <= 15)
	{
		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <= n; c++)
			{
				p = r * c;
				if (c == 0)
					_putchar('0' + p);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (p <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + p);
					}
					else if (p > 9 && p < 100)
					{
						_putchar(' ');
						_putchar('0' + (p / 10));
						_putchar('0' + (p % 10));
					}
					else if (p >= 100)
					{
						_putchar('0' + (p / 100));
						_putchar('0' + ((p / 10) % 10));
						_putchar('0' + (p % 10));
					}
				}
			}
			_putchar('\n');
	}
	}
}
