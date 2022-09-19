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
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
			i++;
		}
	}
	_putchar('\n');
}
