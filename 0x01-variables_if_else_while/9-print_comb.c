#include<stdio.h>
/**
 *main -entry
 *Return: always true
 */
int main(void)
{
	int i;

	for (i = 1 ; i <= 9 ; i++)
	{
		putchar(i + '0');
		if(i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
