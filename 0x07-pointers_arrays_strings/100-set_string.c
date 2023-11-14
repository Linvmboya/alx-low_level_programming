#include "main.h"
/**
 * set_string - Function that sets a value of a pointer to a char
 * @s: a pointer to a pointer
 * @to: pointer char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
