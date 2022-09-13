#include<stdio.h>
#include "main.h"
/**
 * main -enry
 *
 * Return: rr
 */
int main(void)
{
	char *ch = "_putchar";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
_putchar('\n');
return (0);
}
