#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: An input
 * @height: An input
 * Return: A pointer to the array (success), otherwise (NULL)
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int m;
	int n;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(sizeof(int *) * height);
	if (s == NULL)
		return (NULL);
	for (m = 0; m < height; m++)
	{
		s[m] = malloc(sizeof(int) * width);
		if (s[m] == NULL)
		{
			for (; m >= 0; m--)
				free(s[m]);
			free(s);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			s[m][n] = 0;
	}
	return (s);
}
