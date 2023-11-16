#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - imprimer le nom en utilisant le pointeur de la fonction
* @name: chaîne de caractères à ajouter
* @f: pointeur sur la fonction
* Return: rien
**/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

/**
* name == NULL: Vérifie si la variable name est nulle
* ou
* f == NULL: Vérifie si la fonction f est nulle.
**/
