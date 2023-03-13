#include <stdio.h>
/**
 * main - adding argument
 * @argc: count number of argument
 * @argv: array for entery argument
 * Return: Always 0 (Success)
 */
int __attribute__ ((unused)) main(int argc, char *argv[])
{
	char **ptr;
	int len = 0;

	for (ptr = argv + 1; *ptr != NULL; ptr++)
		len = len + 1;
	printf("%d\n", len);
	(void)argc;
	return (0);
}
