#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: is the value to be checked to binary
 * @index: is the index, start from 0 of the bit you want to get
 *
 * Return: the value of the bit at the index given
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int result = 0;

	if (index >= 64)
		result = -1;
	else
	{
		n >>= index;
		result = (n & 1);
	}
	return (result);
}
