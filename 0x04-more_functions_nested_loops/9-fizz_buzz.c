#include<stdio.h>
/**
 *
 *
 *
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			_putchar("fizz buzz");
		else if ((i % 5) == 0)
			_putchar("buzz");
		else if ((i % 3) ==0)
			_putchar("fizz");
		else
			_putchar(i);
		_putchar(' ');
		_putchar('\n');
	}
}
