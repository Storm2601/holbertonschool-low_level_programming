#include <stdio.h>

/**
* main - prints all possible combination of three digits
*
* Return: 0
*/

int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '7'; i++)
	{
		for (j = '1'; j <= '8'; j++)
		{
			for (k = '2'; k <= '9'; k++)
			{
				if (j > i && k > j)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i != '7' || j != '8' || k != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

