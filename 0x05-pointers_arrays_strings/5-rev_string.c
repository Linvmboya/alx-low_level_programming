#include "main.h"
/**
 * rev_string - is a function that reverses a string
 * @s: is the string to be input
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char ch = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		ch = s[i];
		s[i] = s[counter];
		s[counter] = ch;
	}
}
