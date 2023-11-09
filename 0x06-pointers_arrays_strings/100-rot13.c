#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13
 * @s: pointer to the string being encoded
 * Return: s
 */
char *rot13(char *s)
{
	int a, b;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char detarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == data[b])
			{
				s[a] = detarot[b];
				break;
			}
		}
	}
	return (s);
}
