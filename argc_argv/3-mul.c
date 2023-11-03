#include <stdlib.h>
#include <stdio.h>

/**
* main - multiplie deux arguments
*
* @argc: int d'arguments
* @argv: tableau d'arguments
*
* Return: 1 si le programme ne reçoit pas 2 arguments, sinon 0
*/

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
