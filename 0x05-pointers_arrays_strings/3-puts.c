#include<stdio.h>
#include "main.h"
/**
 * _puts -print string
 *
 * @str: string to be printed
 *
 */
void _puts(char *str)
{
	int i, len = strlen(str) + 1;

	char *temp = alloca(len);

	for (i = 0; i < len; i++)
	{
		char ch = str[i];

		if (ch == '\n')
			break;
		temp[i] = ch;
	}
	temp[i] = 0;
	puts(temp);
}
