#include "main.h"

/**
* actual_sqrt_recursion - recherche la racine carrée naturelle d'un nombre.
* @number : nombre pour calculer la racine carrée de ...
* @root : itérateur
*
* Return: résultat de la racine carrée.
*/
int actual_sqrt_recursion(int number, int root)
{
	if ((root * root) > number)
	{
		return (-1);
	}
	else if ((root * root) == number)
	{
		return (root);
	}
	else
	{
		return (actual_sqrt_recursion(number, root + 1));
	}
}
/**
* _sqrt_recursion - fonction renvoie la racine carrée naturelle d'un nombre
* @n : nombre d'entrée
*
* Return: 0
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (actual_sqrt_recursion(n, 0));
	}
}
