#include <stdio.h>

/**
* main - prints all possible combination of two digits
*
* Return: 0
*/

int main(void)
{
	int i, j;

	for (i = '0'; i <= '8'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);

				if (i != '8' || j != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

