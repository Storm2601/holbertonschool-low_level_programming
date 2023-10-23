#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i;
	int y;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	i = i - 1;

	for (y = 0; i > y; y++, i--)
	{
		temp = s[i];
		s[i] = s[y];
		s[y] = temp;
	}
}
