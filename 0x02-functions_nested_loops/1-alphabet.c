#include<stdio.h>
#include "main.h"
/**
 * print_alphabet - print small letter chars
 * Description: prints char
 * Return: always 0(true)
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
