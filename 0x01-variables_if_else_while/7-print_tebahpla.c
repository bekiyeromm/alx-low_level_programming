#include<stdio.h>
#include<stdlib.h>
/**
 *main -entry
 *Return: always 0 (success)
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
