#include <unistd.h>
/**
 * main entry
 *
 *return zero
 */
 void _putchar(char c)
{

	return (write(1, &c, 1));
}
