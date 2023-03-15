#include <stdio.h>
#include <stdlib.h>
/**
 * main - take argument for coin count
 * @argc: count number of argument
 * @argv: array for entery argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n, i, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	res = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && n >= 0; i++)
	{
		while (n >= coins[i])
		{
			res++;
			n -= coins[i];
		}
	}

	printf("%d\n", res);
	return (0);
}
