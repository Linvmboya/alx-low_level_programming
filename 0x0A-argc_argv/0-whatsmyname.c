#include "main.h"
#include <stdio.h>

/**
 * main - is a program that prints its name
 * @argc: counts the number of arguments
 * @argv: an array of arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}