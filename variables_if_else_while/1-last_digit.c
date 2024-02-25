#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: displays the last digit of the number stored in the variable
*
* Return: if digit is smaller than 6 or greater 5 or equal 0 (Success)
*/

int main(void)
{
	int n;
	int last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_num = n % 10;

if (last_num > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, last_num);
}
else if (last_num == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, last_num);
}
	else if (last_num < 6 && last_num != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_num);
}

return (0);
}

