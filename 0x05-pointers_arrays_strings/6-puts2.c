#include<stdio.h>
#include "main.h"
#include<string.h>
/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 *
 * @str: string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i <= strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
