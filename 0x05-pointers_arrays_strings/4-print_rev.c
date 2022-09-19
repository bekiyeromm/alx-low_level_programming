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
	int i, c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}
	for (i = (c - 1); i >= 0; i--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
