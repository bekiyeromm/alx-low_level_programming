#include<stdio.h>
#include "main.h"
/**
 * print_sign -prints sign of num
 * @n: parameter
 *
 *Return: return 1 if posetive -1 if negtve
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
