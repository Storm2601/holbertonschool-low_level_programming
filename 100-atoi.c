#include <stdio.h>
#include "main.h"

/**
 * _atoi - a function that converts string to integer
 * @s: An input string
 * Return: integer from conversion
 */

int _atoi(char *s)
{
	int sign = 1;
	int res = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
		sign *= -1;
		}
			else if (s[i] >= '0' && s[i] <= '9')
			{
			res = res * 10 + s[i] - '0';
			}
		else if (res > 0)
		{
		break;
		}
	i++;
	}
	return (sign * res);
}

