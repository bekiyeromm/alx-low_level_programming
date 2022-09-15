#include<stdio.h>
/**
 * main -entry
 * Return: always zero
 */
int main(void)
{
	unsigned int i = 1, j = 2, k = 3, l, sum = 2;

	for (l = 2; l <= 32; l++)
	{
		if (k % 2 == 0)
			sum = sum + k;
		i = j;
		j = k;
		k = i + j;
	}
	printf("%u\n", sum);
	return (0);
}
