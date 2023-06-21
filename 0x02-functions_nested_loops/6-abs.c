#include<stdio.h>
/**
 * _abs -Computes the absolute value of an integer
 * @c: the absolute value to be printed
 * Return: 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
