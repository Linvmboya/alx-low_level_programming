#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * check_num - checks for a digit in a string
 * @str: array str
 * Return: 0
 */
int check_num(char *str)
{
	unsigned int numb;

	numb = 0;

	while (numb < strlen(str))
	{
		if (!isdigit(str[numb]))
		{
			return (0);
		}
		numb++;
	}
	return (1);
}
/**
 * main - prints program name
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;
	int string;
	int sum;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			string = atoi(argv[count]);
			sum += string;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	count++;
	}
	printf("%d\n", sum);
		return (0);
}



