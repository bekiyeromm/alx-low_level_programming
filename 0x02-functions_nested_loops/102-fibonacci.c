#include<stdio.h>
/**
 * main -entry
 *
 * Return: always zero
 */
int main(void)
{
	long int i = 1, j =2 , k = 3, l;

	printf("%ld, ", i);
	printf("%ld, ", j);
	for (l = 3; l < 50; l++)
	{
		i = j;
		j = k;
		k = i + j;
	}
	printf("%ld\n", k);
	return (0);
}
