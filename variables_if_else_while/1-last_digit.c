#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Description: 'the program's description'
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last digit of n % 10)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (n == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, last);
	}
	else if (n < 6 && last != 0)
	{
		printf("last digit of %d is %d and not 0 and is less than 6\n", n, last);
	}
	return (0);
}
