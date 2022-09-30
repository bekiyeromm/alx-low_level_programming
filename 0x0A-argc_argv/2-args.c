#include<stdio.h>
#include<string.h>

/**
 * main - print each argument passed to program on a line
 * @argc:number of  argument
 * @argv: pointer to array of arguments
 * Return: always 0 if true
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
