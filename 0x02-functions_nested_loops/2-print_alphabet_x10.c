#include<stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 -print alphabet 10 times
 * Description: print char
 * return: always zero
 */
void print_alphabet_x10(void)
{
	int i, c;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
