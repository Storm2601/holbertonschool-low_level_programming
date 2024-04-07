#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: is the value to be checked to binary
 * @index: is the index, start from 0 of the bit you want to get
 *
 * Return: the value of the bit at the index given
 * or -1 if an error occured.
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

/**
 * two_power_index - return the number raised to the power
 * @power: value of power
 *
 * Return: The number raised to the power
 */

unsigned long int two_power_index(unsigned int power)
{
	unsigned long int result = 1;

	while (power != 0)
	{
		result *= 2;
		power--;
	}
	return (result);
}

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the value to be modified
 * @index: index to set a bit in the value. Start to 0
 *
 * Return: 1 if success. -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int value_return = 1;
	int bit_value = get_bit(*n, index);

	if (bit_value != 0)
		value_return = -1;
	else
		*n += two_power_index(index);
	return (value_return);
}
