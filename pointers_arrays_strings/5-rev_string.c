#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to reverse
 *
 */

void rev_string(char *s)
{
	int i, temporary;

	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}


	for (i = 0; i < len / 2; i++)
	{
		temporary = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temporary;
	}
}

