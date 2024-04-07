#include "main.h"
#include <stdlib.h>

/**
 * print_binary - Function that prints the binary representation of a number
 * @n: te number to print in binary representation
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	_putchar ((n & 1) + '0');
}
