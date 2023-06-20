#include "main.h"
#include "unistd.h"

/**
 * _putchar - Write a program that prints a character followed by a line
 * &c: A charater to be printed
 * Return: 0
 */
int _putchar(char)
{
	return (write(1, &c, 1));
}
