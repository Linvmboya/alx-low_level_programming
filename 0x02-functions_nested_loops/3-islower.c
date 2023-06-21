#include "main.h"
/**
 * _islower -Checks for lowercase characters
 * @c: The character to be checked
 * Return: 1 if it is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
