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
		for (j = i + 1 ; j <= 8 ; j++)
		{
			for (n = j + 1 ; n <= 9 ; n++)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((n % 10) + '0');
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
