#include "main.h"
/**
 * _isalpha - A program that checks for aphabet letters
 * @c: The character to be checked
 * Return: 1 if it is alphabet, otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
