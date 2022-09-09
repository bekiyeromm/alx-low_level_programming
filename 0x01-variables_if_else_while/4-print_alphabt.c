#include<stdio.h>
#include<stdlib.h>
/**
 *main -entry
 *Return: always 0
 */
int main(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i == 'e' || i == 'q')
			continue;
		else
			putchar(i);
	putchar('\n');
	return (0);
}
