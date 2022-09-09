#include<stdio.h>
#include<stdlib.h>
/**
 *main -entry
 *Return: always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
