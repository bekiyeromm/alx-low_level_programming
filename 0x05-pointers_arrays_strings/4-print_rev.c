#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 *print_rev -print a string in reverse direction
 *
 *@s: string to be reversed
 */
void print_rev(char *s)
{
	int i, l = strlen(s);

	for (i = (l - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
