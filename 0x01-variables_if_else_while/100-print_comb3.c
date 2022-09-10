#include<stdio.h>
/**
 *main -entry
 *Return: always true
 */
int main(void)
{
	int i, j, n = 1;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = n ; j <= 9 ; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
