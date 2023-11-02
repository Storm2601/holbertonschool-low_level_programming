#include "main.h"

/**
 * _isalpha - Check if c is lowercase or not
 * @c: character
 * Return: if c is _isalpha - Returns 1 or Returns 0 otherwise
 */

int _isalpha(int c) /* init _isalpha 0 for 'C' */
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}

