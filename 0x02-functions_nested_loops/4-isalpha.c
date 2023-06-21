#include "main.h"
/**
 * _isalpha -Checks for alphabetic character
 * @c: Is the character to be checked
 * Return: 1 if it is a letter else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
