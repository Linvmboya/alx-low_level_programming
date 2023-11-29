#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - computes the sum of two number
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - computes the differance of two numbers
 * @a: first number
 * @b: second number
 * Return: differance of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - computes the product of a and b
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - computes the division of two numbers
 * @a: first number
 * @b: second number
 * Return: a divided by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - computes the remainder obtained from the division of teo numbers
 * @a: first number
 * @b: second number
 * Return: the remainder obtained after the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
