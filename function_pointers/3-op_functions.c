#include "3-calc.h"
#include <stdio.h>

/**
* op_add - renvoie la somme de a et b
*
* @a: premier int
* @b: second int
*
* Return: renvoie la somme de a et b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - renvoie la différence entre a et b
*
* @a: premier int
* @b: second int
*
* Return: la différence entre a et b
*/
int op_sub(int a, int b)
{
	return (a - b);

}

/**
* op_mul - renvoie le produit de a et b
*
* @a: premier int
* @b: second int
*
* Return: le produit de a et b
*/
int op_mul(int a, int b)
{
	return (a * b);

}

/**
* op_div - renvoie le résultat de la division de a par b
*
* @a: premier int
* @b: second int
*
* Return: le résultat de la division de a par b
*/
int op_div(int a, int b)
{
	return (a / b);

}

/**
* op_mod - renvoie le reste de la division de a par b
*
* @a: premier int
* @b: second int
*
* Return: le reste de la division de a par b
*/
int op_mod(int a, int b)
{
	return (a % b);

}
