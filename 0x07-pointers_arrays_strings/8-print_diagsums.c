#include "main.h"
/**
 * print_diagsums - finds the sum of diagonals of two square matrix
 * @a: parameter for input pointer.
 * @size: size of the matrix
 * Return: returns nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum1 += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum2 += *(a + i);
	}
	printf("%d, %d\n", sum1, sum2);
}
