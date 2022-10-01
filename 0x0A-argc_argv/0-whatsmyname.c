#include <stdio.h>
#include<stdlib.h>
/**
 * main - function prints name, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array of pointer to string of command line arguments.
 * Return: always  0 on success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
