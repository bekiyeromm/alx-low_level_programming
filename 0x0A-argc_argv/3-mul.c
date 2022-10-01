#include <stdio.h>
#include <stdlib.h>
/**
 * main - function which multiply to number
 * @argc: counts number of argument
 * @argv: numbers to be multiply
 * Return: 0 on success, 1 if two arguments not given
 */

int main(int argc, char *argv[])
{
	if (argc != 3)/* the input should have 3 argument*/
	{
		printf("Error\n");
		return (1);
	}

	/* mulitply two arguments passed via cmd line */
	/*atoi is used to convert string to integer*/
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
