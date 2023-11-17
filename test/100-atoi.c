#include "main.h"
/**
 * _atoi - It converts a given string into an integer
 * @s: The string to be converted
 * Return: The integer from the converted string
 */
int _atoi(char *s)
{
	int a = 1;
	int l = 0;
	unsigned int b = 0;

	while (!(s[l] <= '9' && s[l] >= '0') && s[l] != '\0')
	{
		if (s[l] == '-')
		{
			a *= -1;
		}
		l++;
	}
	while (s[l] <= '9' && (s[l] >= '0' && s[l] != '\0'))
	{
		b = (b * 10) + (s[l] - '0');
		l++;
	}
	b *= a;
	return (b);
}
