#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>
/* betty style doc for function main goes there */
/**
 *main -entry of function
 *Return: always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n%10) > 5)
		printf("last digit of %d is %d greater than 5\n", n , (n%10));
	else if ((n%10)==0)
		printf("last digit of %d is %d greater than 5\n", n , (n%10));
	else
		printf("last digit of %d is %d greater than 5\n", n , (n%10));


	return (0);
}
