#include<stdio.h>
/**
 * main -main entry
 *
 * Return: always zero
 */
int main(void)
{
	int i, j, a, b, sum = 0;

	 for (i = 0; i <= (1024 / 3); i++)
	 {
		 a = 3 * i;
		 sum = sum + a;
	 }
	 for (j = 0; j <= (1024 / 5); j++)
	 {
		 if (!(j % 3 == 0))
		 {
			 b = 5 * j;
			 sum = sum + j;
		 }
	 }
	 printf("%i\n", sum);
	 return (0);
}
