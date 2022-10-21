#include "lists.h"

void fun(void) __attribute__ ((constructor));

/**
 * fun - function to print before main function
 *
 * Return: Void
 */

void fun(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
