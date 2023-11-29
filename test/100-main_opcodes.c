#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the opcodes of its functions
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n, m;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (m = 0; m < n; m++)
	{
		if (m == n - 1)
		{
			printf("%02hhx\n", arr[m]);
			break;
		}
		printf("%02hhx ", arr[m]);
	}
	return (0);
}
