#include "3-calc.h"
#include "function_pointers.h"
/**
 * get_op_func - selects correct function to perform the operation required
 * @s: the operator passed as argument to the program
 * Return: pointer to function corresponding to operator given as parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int m = 0;

	while (ops[m].op != NULL && *(ops[m].op) != *s)
	{
		m++;
	}
	return (ops[m].f);
}
