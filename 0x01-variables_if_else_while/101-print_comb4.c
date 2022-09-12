#include<stdio.h>
/**
 *main -entry
 *Return: always true
 */
int main(void)
{
	int i, j, n;

	for (i = 0 ; i <= 7 ; i++)
	{
		for (j = 1 ; j <= 8 ; j++)
		{
			for (n = 2 ; n <= 9 ; n++)
			{
				if (i == n || j == n || j == i)
					continue;
				putchar(i + '0');
				putchar(j + '0');
				putchar(n + '0');
				if (i == 7 && j == 8 && n == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
		}
		putchar('\n');
		return (0);
}
