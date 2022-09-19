#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 *print_rev -print a string in reverse direction
 *
 *@s: string to be reversed
 */
void rev_string(char *s)
{
	int i, l = strlen(s);

	for (i = (l - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
