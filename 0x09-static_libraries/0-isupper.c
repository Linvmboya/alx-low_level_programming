#include "main.h"
/**
 * _isupper - checks for uppercase letters
 * @c: the character to be checked
 * Return: 1 if the character is uppercase, else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
