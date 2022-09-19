#include<stdio.h>
#include "main.h"
#include<string.h>
/**
 * puts_half -prints half of string
 *
 * @str: parameter
 */
void puts_half(char *str)
{
	int i, l, s, j;

	l = strlen(str);
	for (i = (l - 1); i >= 0; i--)
	{
		if (l % 2 == 0)
			s = l / 2;
		else
			s = (l - 1) / 2;
	}
	for (j = s; j < l; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
