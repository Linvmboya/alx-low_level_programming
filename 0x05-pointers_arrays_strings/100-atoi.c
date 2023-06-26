#include "main.h"
/**
 * _atoi - is a function that converts a string into an integer
 * @s: the string
 * Return: an integer
 */
int _atoi(char *s)
{
	int b, d, n, lcm, f, digit;

	b = 0;
	d = 0;
	n = 0;
	lcm = 0;
	f = 0;
	digit = 0;

	while (s[lcm] != '\0')
		lcm++;
	while (b < lcm && f == '0')
	{
		if (s[b] == ' ')
			++d;
		if (s[b] >= '0' && s[b] <= '0')
		{
			digit = s[b] - '0';
			if (d % 2)
				digit = -digit
					n = 
