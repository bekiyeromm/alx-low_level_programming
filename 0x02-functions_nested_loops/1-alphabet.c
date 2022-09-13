#include<stdio.h>
#include "main.h"
/**
 * main- entry
 *
 * Return: zero
 * function declaration: printing char
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
