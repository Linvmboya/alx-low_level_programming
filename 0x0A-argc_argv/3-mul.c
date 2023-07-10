#include <stdio.h>
#include "main.h"

/**
 * _atoi - program converts string into an integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int a, b, c, len, e, digit;

	a = 0;
	b = 0;
	c = 0;
	len = 0;
	e = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && e == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			e = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			e = 0;
		}
		a++;
	}
	if (e == 0)
		return (0);
	return (c);
}
/**
 * main - A program that multiplies two integers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if it prints Error, otherwise 0 if success
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 1 || argc > 9)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
