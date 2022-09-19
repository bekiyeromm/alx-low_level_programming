#include<stdio.h>
#include "main.h"
/**
 * _puts -print string
 *
 * @str: string to be printed
 *
 */
void _puts(char *str)
{
	char st[30];

	str = st;
	while (!str)
	{
		_putchar(*str);
		*str++
	}
	_putchar('\n');
}
